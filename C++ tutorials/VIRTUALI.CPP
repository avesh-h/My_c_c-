#include<iostream.h>
#include<conio.h>

/*class base
{
 protected:
   int a;

 public:
    base(){}
    base(int x)
    {
     a=x;
     }

    void show()
    {
     cout<<endl<<a;
     }
     };

 class derr2 : virtual public base
 {
   protected:
     int c;

   public :
	   derr2(int x,int y)
	   {
	     base :: base(x);
	     c = y;
	     }

   void show()
   {
     base :: show();
     cout<<"\t"<<c;
     }
     };


   class derr3 : virtual public base
   {
     protected :
       int d;

     public :
	 derr3(int x, int y)
	 {
	   base :: base(x);
	    d=y;
	    }

      void show()
      {
       cout<<endl<<a<<"\t"<<d;
       }
       };

     class derr4 : public derr2, public derr3
     {
       public:

       derr4(int x,int y,int z, int l):derr2(x,y),derr3(z,l)
       {}

       void show()
       {
	 cout<<endl<<a<<"\t"<<c<<"\t"<<a<<"\t"<<d;
	 }
	 };


	 void main()
       {
	 clrscr();
	  derr4 m(1,2,3,4);
	  m.show();
	  getch();
	  }  */

/*
class A1
{
  public:
      void a1fun()
      {

       cout<<"This is A1 function:\n";
       }
       };


 class A2 : virtual public A1
 {
   public:

    void a2fun()
    {
     cout<<"This is A2 function:\n";
     }
     };

 class A3 : virtual public A1
 {
   public:

   void a3fun()
   {
     cout<<"This is A3 function:\n";
     }
     };

class A4 : public A2, public A3
{
   public:
     void a4fun()
     {
       cout<<"This is A4 function:\n";
       }
       };



 void main()
 {
   clrscr();
   A4 obj;
   obj.a1fun();
   obj.a2fun();
   obj.a3fun();
   obj.a4fun();

   getch();
   }
      */






