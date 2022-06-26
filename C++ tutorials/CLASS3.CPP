#include<iostream.h>
#include<conio.h>



       //basic Example of CLASS 3
       //constructor and destructor


/*class sum
{
 private :
     int a,b;
   //sum:: ~sum();    //Destructor


  public :
     sum()     //constructor
     {
       int p,q;
       a=p; b=q;
       cout<<"Enter values:\n";
       cin>>a; cin>>b;
       cout<<"="<<a+b;
       }
       ~sum()              //Destructor
       {};
       };


       void main()
       {
	 clrscr();
	 sum x;
	 getch();
	 }  */


	 //class 3 method for table


/* class table
 {
	  int num;

      public :

	table()
	{
       int n,i,tab=0;
       num = n;
       cin>>n;

       for(i=1;i<=10;i++)
       {
	 tab = n*i;
	 cout<<n<<"x"<<i<<"="<<tab<<endl;
	 }
	 }
	 ~table()
	 {};
	 };



    void main()
    {
      clrscr();
      table x;
      getch();
      }  */



	     //CLASS 3 AND CLASS 2 COMBINE TECHNIQUE EXAMPLE IN TABLE

  /* class table
   {
	int num;
	table::~table();

       public:
	 table();
	 };


     table::table()
     {
	int i,tab=0,n;
	num=n;
	cout<<"Enter the number for table:\n";
	cin>>n;

	for(i=1;i<=10;i++)
	{
	  tab = n*i;
	  cout<<n<<"x"<<i<<"="<<tab<<endl;
	}
	}


    void main()
    {
     clrscr();
     table z;
     getch();
     }*/


	    //CLASS 2 BASIC EXAMPLE WITH MATRIX


  /* class matrix
   {
       public:
	 void matric() ;
	 void show();
	  };


  void matrix:: matric()
      {
	int a[3][3],i,j;

	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	   cin>>a[i][j];
	   }
	   }
	 }

 void matrix:: show()

	{
	    int i,j,a[3][3];
	  cout<<"\nYour matrix are:\n";
	    for(i=0;i<3;i++)
	    {
	    for(j=0;j<3;j++)
	    {
		cout<<" "<<a[i][j];
		}
	      cout<<endl;
	      }
	      }

     void main()
     {
       clrscr();
       matrix z;
       z.matric();
       z.show();
       getch();
       }*/






