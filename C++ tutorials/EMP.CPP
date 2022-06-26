#include<iostream.h>
#include<conio.h>
#include<string.h>

class emp
{
   protected:
      int id;
      char name[10];
      float sal;

   public:
       void setdata()
       {
	 //id=i;
	  //strcpy(n,name);
	  //sal = sa;

	  cout<<"Enter the name:";
	  cin>>name;
	  cout<<"Enter the id:";
	  cin>>id;
	  cout<<"Enter basic salary:";
	  cin>>sal;
}
      /*void pdata()
      {
	 cout<<"Name:"<<name<<endl;
	 cout<<"Id :"<<id<<endl;
	 cout<<"Basic salary:"<<sal<<endl;
	 }*/

	  };

 class salary
 {
    protected:

       float da;
       float hra;

   public:
	 void saldata()
	 {
	 //da = d;    hra=h;
	 cout<<"da:";
	 cin>>da;
	 cout<<"hra:"; cin>>hra;
	 }
       /*	 void salshow()
	 {
	  cout<<"da: "<<da<<"hra: "<<hra<<endl;
	  } */
	 };

  class all : public emp, public salary
  {
     private:
	float ta;
	float gsal;
     public:

	  void putdata()
	  {
	    //ta = t;   gsal = s;
	    ta = 0.10 * sal;
	    gsal = da + hra + ta + sal ;
	    cout<<"Ta:";
	    cin>>ta;
	    cout<<"Total salary:"<<gsal<<endl;
	    //return gsal;
	    }
	   void fullshow()
	   { cout<<"Name:"<<name<<endl;
	     cout<<"Id:"<<id<<endl;
	     cout<<"Basic salary:"<<sal<<endl;
	  //   cout<<"da:"<<da<<endl;
	    // cout<<"hra:"<<hra<<endl;
	     //cout<<"Ta:"<<ta<<endl;
	     cout<<"Total salary:"<<gsal<<endl;

	    }
	    };


 void main()
{
   int n;
   all *f;
   //all r;
   clrscr();
   cout<<"How many Employees?\n";
   cin>>n;
   f = new all[n];
   for(int i=0;i<n;i++)
   {
      cout<<"Enter detail of employee "<<i+1<<endl;

      f[i].setdata();
      f[i].saldata();
      f[i].putdata();
      clrscr();
   //   f[i] = all(i,n,sa,d,h)
      }
   for(i=0;i<n;i++)
   {// cout<<"-------------\n"<<endl;
     cout<<"\nEmployee no."<<i+1<<endl;
     cout<<"-------------\n";
     //f.pdata();
     //f.salshow();
     f[i].fullshow();
     }
     getch();
     }





