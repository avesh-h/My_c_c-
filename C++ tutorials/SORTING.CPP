#include<iostream.h>
#include<conio.h>
void main()
{
   int i,j,a[10],n;
   clrscr();
   cout<<"how many degits?\n";
   cin>>n;

   for(i=0;i<n;i++)
   {
     cin>>a[i];
     }

   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     if(a[j]>=a[i])
     {

       int temp = a[j];
       a[j] = a[i];
       a[i] = temp;
       }
       }
     cout<<"Answer is:\n";
     for(i=0;i<n;i++)
     {
       cout<<a[i]<<endl;
       }
       getch();
       }