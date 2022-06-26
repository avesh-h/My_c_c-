#include<iostream.h>
#include<conio.h>

class table
{
  public:
	  table()
	  {
	     int n,t=0;
	     cout<<"Enter numbger for table:\n";
	     cin>>n;
	     for(int i=1;i<=10;i++)
	     {
		t = n * i;
		cout<<n<<"x"<<i<<"="<<t<<endl;
		}
		}
		};

class power:public table
{
   public:

       power()
       {
	  int n,p,m=1;
       cout<<"Enter the base:\n"; cin>>n;
       cout<<"Enter power:\n";  cin>>p;
       while(p!=0)
       {
	m = n * m;
	p--;
	}
	cout<<m;
	}
	};

void main()
{
  clrscr();
  power z;
  getch();
  }



