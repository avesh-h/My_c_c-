#include<iostream.h>
#include<conio.h>

			//SINGLE INHERITANCE

		      //PROTECTED

      //BASIC EXAMPLE OF INHERITANCE
      //PRTECTED MEMBER OF CLASS 1 IS CAN ACCESSIBLE IN CLASS 2
      //BUT PRIVATE MEMBER DATA CANNOT ACCESS IN CLASS 2

/*class baseclass
{
  protected:
      int i,j;

  public:
    void set()
    {
     int a,b;
     a=i;
     b=j;
     cin>>i;   cin>>j;
     }


     };

   class derivedclass : public baseclass
   {
   int k;
   public :

   void setk()
   {
    k = i*j;
    }

    void showk()
    {
    cout<<k<<endl;
    }
    };

    void main()
    {
    clrscr();
    derivedclass ob;

    ob.set();
   // ob.show();


    ob.setk();
    ob.showk();

    getch();
    }  */


			   //PRIVATE

    //PRIVATE MEMBER OF CLASS 1 IS USED IN ANATHOR CLASS BY USING
    //FRIEND FUNCTION EXAMPLE IS BELOW


    /* class base
    {
      private :
       int a,b;

      public:

      friend class derived;       //Function is added for visiblity

      void set()
      {
	int x,y;
	a=x;
	b=y;
       cout<<"Enter 2 numbers:\n";
       cin>>a; cin>>b;
	}
	};



     class derived : public base

     {
	int k;

	public :

	void ans()
	{
	  // int k;
	   k = a + b;       //accessible
	   }


	void show()
	{
	 cout<<"="<<k<<endl;
	}

	  };

       void main()
       {
	clrscr();
	derived ob;
	ob.set();
	ob.ans();
	ob.show();

	getch();
	}  */


       //ANATHOR EXAMPLE OF PRIVATE INHERITANCE WITH FRIEND FUNCTION

/* class employee
 {
   private :
      int id;
      char name[10];

   public:

     friend class phyemp;

     void setdata()
     {
       cout<<"Enter emplyee id:\n";
       cin>>id;
       cout<<"Name:";
       cin>>name;
       }
       };


 class phyemp : public employee
 {
    private :
      int height,weight;

      public:

      void phydata()
      {
	 cout<<"Enter the height of emplyee:\n";
	 cin>>height;
	 cout<<"Weight:\n";
	 cin>>weight;
	 }

      void showdata()
      {
	cout<<"ID ="<<id<<endl;
	cout<<name<<endl;
	cout<<weight<<" kg "<<endl;
	cout<<height<<" cm "<<endl;

	}
	};


     void main()
     {
       clrscr();
       phyemp x;
       cout<<"Your data is:\n";

       x.setdata();
       x.phydata();
       x.showdata();

       getch();
       }*/



       //IF CLASS 1 DATA ADDED IN CLASS 2 PRIVATE MEMBER THEN
       //IT CAN ACCESS BY SIMPLY FUNCTION CALL PUBLIC OF CLASS 2


  /* class employee
 {
   private :
      int id;
      char name[10];

   public:

     friend class phyemp;

     void setdata()
     {
       cout<<"Enter emplyee id:\n";
       cin>>id;
       cout<<"Name:";
       cin>>name;
       }
       };


 class phyemp : private employee
 {
    private :
      int height,weight;

      public:

      void phydata()
      {
	 setdata();           //FUNCTION CALL

	 cout<<"Enter the height of emplyee:\n";
	 cin>>height;
	 cout<<"Weight:\n";
	 cin>>weight;
	 }

      void showdata()
      {
	cout<<"ID ="<<id<<endl;
	cout<<name<<endl;
	cout<<weight<<" kg "<<endl;
	cout<<height<<" cm "<<endl;

	}
	};


     void main()
     {
       clrscr();
       phyemp x;
       cout<<"Your data is:\n";

       x.phydata();
       x.showdata();

       getch();
       }*/


	      //MULTIPLE INHERITANCE
   /*
  class Student
  { protected:
    int id,std;
    char name[10];

    public:

      void setd()
      {
	cout<<"Enter the name of students:\n";
	cin>>name;
	cout<<"Enter standard and Id:\n";
	cin>>std>>id;
	}
	};


   class Marks
   {
      protected :

       int m1,m2,m3;

       public :

       void entm()
       {
	 cout<<"Enter the Marks of 3 subjects:\n";
	 cin>>m1>>m2>>m3;
	 }
	 };


     class Result : public Student, public Marks
     {
	int total;
	float avg;

	public:

	void showdata()
	{
	   total = m1 + m2 + m3;
	   avg = total/3.0;

	   cout<<"Total="<<total<<endl;
	   cout<<"Average="<<avg<<endl;
	   }

	 void fulldata()
	 {
	    cout<<"Name:- "<<name<<endl;
	    cout<<"Id:- "<<id<<endl;
	    cout<<"Std:- "<<std<<endl;
	    cout<<"Result:- "<<avg<<endl;
	    }
	    };


     void main()
     {
      clrscr();
      Result x;
      x.setd();
      x.entm();
      x.showdata();
      x.fulldata();

      getch();
      }*/



			  //HYBRID INHERITANCE

/*
 class Student
 {
   private :
     int id,std;
     char name[10];

     public :
     friend class Result;

     void getdata()
     {
     cout<<"Enter the name,id and std of student:\n";
     cin>>name>>id>>std;
     }
     };

     class Marks : public Student
     {
       protected:
       int m1,m2,m3,total;
       float avg;

       public:

       void entm()
       {
	 cout<<"Now enter the 3 subjects Marks:\n";
	 cin>>m1>>m2>>m3;
	 }


	 void setdata()
	 {
	   total = m1+m2+m3;
	   avg = total/3.0;
	   cout<<"Total= "<<total<<endl;
	   cout<<"Average= "<<avg<<endl;
	   }

	 };



     class Sports
     {
       protected :
       int spmarks;

       public:
       void spmark()
       {
	 cout<<"Enter Sports marks:\n";
	 cin>>spmarks;
	 }
	 };

      class Result : public Marks,public Sports
       {
       int result;

       public:

	void resdata()
	{

	  result = avg + spmarks;

	  cout<<"Result: "<<result<<endl;
	  }

	  void showdata()
	  {
	  cout<<"\n\t\tFinal data is\n";
	  cout<<"\tName: "<<name<<endl;
	  cout<<"\tStd: "<<std<<endl;
	  cout<<"\tId: "<<id<<endl;
	  cout<<"\tResult: "<<result<<endl;
	  }
	  };


   void main()
   {
     clrscr();
     Result r;

     r.getdata();

     r.entm();
     r.setdata();

     r.spmark();

     r.resdata();
     r.showdata();

     getch();
     }   */























