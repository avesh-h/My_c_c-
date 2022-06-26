#include<iostream.h>
#include<conio.h>

/*class sum
{
   private:
      int a,b;

   public:
	 void assign(int,int);
	 void plus();
	 void sub();
	 void mul();

   };

  void sum :: assign(int x,int y)
  {
      a=x; b=y;
      }


    void sum :: plus()
    {
      cout<<"="<<a+b<<endl;
      }

     void sum :: sub()
     {
     cout<<"="<<a-b<<endl;
     }

     void sum :: mul()
     {
     cout<<"="<<a*b<<endl;
     }

   void main()
   {
     sum ob;
     int p,q;
     clrscr();
     cout<<"Enter values\n";
     cin>>p; cin>>q;
     ob.assign(p,q);
     ob.plus();
     ob.sub();
     ob.mul();
     getch();
     } */


/*  class employee
  {
    private :
    char name[10];
    float age;

    public :

    void getdata();
    void putdata();
    };

    void employee::getdata()
    {
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    }
    void employee::putdata()
    {
    cout<<"name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    }

    const int size = 3;
    main()
    {
    employee manager[::size];
    for(int i=0;i<size;i++)
    {
    cout<<"\n Detail of manager"<<i+1<<endl;
    manager[i].getdata();
    }
    cout<<"\n";
    for(i=0;i<size;i++)
    {
    cout<<"\nmanager"<<i+1<<"\n";
    manager[i].putdata();
    }
    }  */



/* class employee
 {
    private:
    char name[10];
    int id;
    float salary;

    public:

	void getdata();
	void putdata();
	};

    void employee::getdata()
      {
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter id:\n";
	cin>>id;
	cout<<"ENter salary:\n";
	cin>>salary;
	}

    void employee::putdata()
     {
      cout<<"name:"<<name<<endl;
      cout<<"id:"<<id<<endl;
      cout<<"salary:"<<salary<<endl;
      }

  const int size = 3;
  void main()
  {
    employee band[::size];
    clrscr();
    for(int i=0;i<size;i++)
    {
       band[i].getdata();
       }
     for(i=0;i<3;i++)
     {
	band[i].putdata();
	}
	}   */


	       // Array as a object

  /* class student
   {
     private :
	 char name[10];
	 int std;
	 int marks;

     public :

	  void entdata();
	  void showdata();

	  };

     void student::entdata()
     {
	cout<<"Name:";
	cin>>name;
	cout<<"Std:";
	cin>>std;
	cout<<"Marks:";
	cin>>marks;
	}



    /*  void student ::showdata()
      {

      cout<<name<<endl;
      cout<<std<<endl;
      cout<<marks<<endl;
      }*/

   /*  const int stu = 3;


       void main()
       {
	 student result[::stu];       //array as a object
	 int stdd,pmarks,j=0;
	 clrscr();
	 for(int i=0;i<stu;i++)
	 {
	   result[i].entdata();
	   cout<<"\n";
	   }
	/* for(i=0;i<stu;i++)
	 {cout<<"Student="<<i+1<<endl;
	 result[i].showdata();
	 }
	 }*/




  /* class student
   {
      private :
	       char name[10];
	       int id;
	       int marks;

      public :
		  void entdata();
		  //void checkdata();

      };


    void student ::entdata()
    {
     // cout<<"Enter students data:\n";
      cout<<"Name:";
      cin>>name;
      cout<<"Id:";
      cin>>id;
      cout<<"Marks:";
      cin>>marks;
      cout<<endl;
      }

    /*void student::checkdata()
    {int idd,pmarks=17,j=0;
   }  */



  /*  const int stu=3;


   void main()
   {
   student result[::stu];
   int j=0,pmarks=17,idd;
   clrscr();
   cout<<"Enter student data:\n\n";
   for(int i=0;i<stu;i++)
   {
      result[i].entdata();

      }


   cout<<"Enter the student id for result:\n";
   cin>>idd;
   if(idd == id[0][1][2])
   {
     j=1;
     if(marks <= pmarks )
     {
       cout<<"Failed\n";
       }
     if(marks > pmarks)
     {
       cout<<"Passed\n";
       }
      }
   if(j==0)
   {
     cout<<"Error\n";
     }
       }  */

		     //print matrix in class 2


  /* class matrix
   {
       int m,n;
       int i,j;
       int a[10][10];
       public:
       void read(int m,int n=3);
       };

  void matrix ::read(int m,int n)
  {
     for(i=0;i<m;i++)
     {
     for(j=0;j<n;j++)
     {
     cout<<"\t\t";
     cin>>a[i][j];
     }
     }
  cout<<"Your Matrix:"<<endl;

  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
  cout<<" "<<a[i][j];
  }
  cout<<" "<<endl;
  }
  }

 void main()
 {
 clrscr();
 matrix mo;
 cout<<"\nEnter no:"<<endl;
 mo.read(3);
 getch();
 }   */



/*class matrix
 {
   private:
       int i,j;
       int m,n,a[10][10];

   public:

      void show(int m,int n);
      };


   void matrix::show(int m,int n)
   {
      cout<<"Enter the Matrix :\n";

      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
	cin>>a[i][j];
	}
	}

      cout<<"\nYour Matrix is:\n";
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cout<<" "<<a[i][j];
      }
      cout<<endl;
      }
      }


   void main()
   { int p=3,q=3;
     matrix my;
     clrscr();
     my.show(p,q);
     getch();
     }*/



   class matrix
   {
      public:

       void entdata();
       };


   void matrix :: entdata()
   {
     int a[3][3],b[3][3],i,j;

     cout<<"Enter 3x3 matrix:\n";

     cout<<"Enter A matrix:\n";
     for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
      {
       cin>>a[i][j];
       }
       }
      cout<<"Enter B matrix:\n";
      for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
      {
       cin>>b[i][j];
       }
       }
       }

      void main()
      {
      int option;
	clrscr();
	matrix z;
	z.entdata();
	cout<<endl;
	cout<<"select options:\n";
	cout<<"1.Plus"<<endl;
	cout<<"1.Minus"<<endl;
	cin>>option;

	switch(option)

	{

	   case 1:
		    clrscr();
		    for(i=0;i<3;i++)
		    {
		    for(j=0;j<3;j++)
		    {
		    cout<<a[i][j]+b[i][j]<<endl;
		    }
		    break;

		    }




	getch();
	}








