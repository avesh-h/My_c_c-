#include<iostream.h>
#include<conio.h>

/*class Test
{
  int a;

  public:
    void get()
    {
      cin>>a;
      }
 //HERE ATLEAST 1 OBJECT CREATE COMPULSORY BECAUSE COMPILER DO NOT KNOW WHICH
  // a IS BELONG TO WHICH ONE.

    void operator == (Test t2)  //Object is Created
    {
       if(a == t2.a)
	cout<<"Objects a are the same.";
	else
	cout<<"Not Equal.";
	}
	//t1 == t2;

	};

void main()
{
  Test t1,t2;    //Second obj added t1
  clrscr();

  cout<<"Enter t1 objects value a:\n";
  t1.get();

  cout<<"Enter t2 objects value a:\n";
  t2.get();

  //comparision of both

 t1 == t2;           //calling operator overloading.
  getch();
  }*/


			// EXAMPLE 2


 /*class distance
  {
    private :
	int feet;
	float inches;

    public:
	  distance()
	  {
	     feet = 0;
	     inches = 0;
	     }
	  distance (int ft,float in)
	  {
	    feet = ft;
	    inches = in;
	    }
	  void input()
	  {
	    cout<<"Enter the feet=";
	    cin>>feet;
	    cout<<"Enter the inches:";
	    cin>>inches;
	    }
	  void dis()
	  {
	    cout<<feet<<"\t"<<inches<<endl;
	    }
	    distance operator +(distance);
	    };

	 void main()
	 {
	  clrscr();
	  distance dis1,dis3;
	  dis1.input();
	  distance dis2(11,6.5);
	  dis3 = dis1 + dis2;
	  cout<<"Distance"<<endl;
	  dis1.dis();
	  dis2.dis();
	  dis3.dis();
	  getch();
	  }

       distance distance:: operator+(distance d2)
       {
	   distance temp;
	   temp.feet = feet+d2.feet;
	   temp.inches = inches+d2.inches;
	   return(temp);
	   }   */





/*
class Measure
{
   int mm,cm;

   public:
	  void getdata ()
	  {
	   int mili,centi;
	   mm = mili;  cm = centi;

	  cout<<"Enter the obj1 value mm:\n";
	   cin>>mm;
	   cout<<"Enter the obj2 value of cm:\n";
	   cin>>cm;

	   }

	  void showdata()
	  {
	    cout<<mm<<"\t"<<cm<<endl;
	    }

       Measure operator+(Measure a2)

       {
     Measure temp;
      temp.mm = mm + a2.mm;
      temp.cm = cm + a2.cm;
      return temp;
	}

      Measure operator - (Measure a2)
      {
	Measure temp;
	temp.mm = mm - a2.mm;
	temp.cm = cm - a2.cm;
	return temp;
	}



	    };



    void main()
    {
      clrscr();
      Measure a1,a2,a3;
      a1.getdata();

      a2.getdata();

      a3 = a1 + a2;    //Function calling

	   a1.showdata(); a2.showdata(); a3.showdata();
      cout<<"For Minus:\n";
      a1.getdata();

      a2.getdata();

      a3 = a1 - a2;    //Function Calling


    a1.showdata();  a2.showdata(); a3.showdata();

    getch();
    }*/

    /* Measure Measure:: operator+(Measure a2)
   {  }*/







