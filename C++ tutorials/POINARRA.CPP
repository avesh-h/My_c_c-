#include<iostream.h>
#include<conio.h>


     //DYNAMIC MEMORY LOCATION  [1D]
     //STORE ARRAY ADDRESS BY POINTER


/*void main()
{
  int n,*p;
  clrscr();
  cout<<"Enter the array size:";
  cin>>n;
  p = new int[n];    //OBJECT IS CREATED BY NEW OPERATOR

  cout<<"Enter the array Elements:\n";
  for(int i=0;i<n;i++)
  {
   cin>>p[i];
   }
   cout<<"Your Array Elements are:\n";

   for(i=0;i<n;i++)
   {
    cout<<p[i];
    }
    getch();
    }*/


   /*void main()
   {
     int **p,nr,nc,r,c;
     clrscr();
     cout<<"Enter no.of rows and column:";
     cin>>nr>>nc;

     p = new int*[nr];

    // for(r=0;r<nr;r++)
     //{
     p[r]= new int[nc];
     //}
     cout<<"Enter "<<nr*nc<<" elements";

     for(r=0;r<nr;r++)
     {
     for(c=0;c<nc;c++)
     {
     cin>>p[r][c];
     }
     }
     cout<<"Elements are\n";
     for(r=0;r<nr;r++)
     {
     for(c=0;c<nc;c++)
     {
      cout<<p[r][c]<<ends;
      }
      cout<<endl;
      }
      delete p;
      getch();
      }*/



       //example  of dynamic memory allocation


 /*void main()
 {
   int n,**p,nr,nc,r,c;
   clrscr();

   cout<<"how many rows x columns=";
   cin>>nr;
   cout<<"x";
   cin>>nc;

   p = new int *[nr];
   for(r=0;r<nr;r++)
   {
     p[r] = new int [nc];
     }
     cout<<"Enter matrix:\n";
    for(r=0;r<nr;r++)
    {
    for(c=0;c<nc;c++)
    {
     cin>>p[r][c];
     }
     }
     cout<<"Your matrix is:\n";
     for(r=0;r<nr;r++)
     {
     for(c=0;c<nc;c++)
     {
     cout<<" "<<p[r][c];
     }
     cout<<endl;
     }*/















   getch();
   }




