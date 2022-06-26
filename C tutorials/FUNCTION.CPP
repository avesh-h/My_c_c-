#include<stdio.h>
#include<conio.h>

	     // basic program of function

/*void sum()
{ int a,b,c;
  clrscr();
  printf("Enter number:\n");
  scanf("%d",&a);
  printf("Enter number:\n");
  scanf("%d",&b);
  c=a+b;
  printf("%d",c);}

 void main()
 { sum();
  getch();} */

		   // Table by using Function
/*void main()
{ int table(int);
int n;
clrscr();
printf("Enter the number for table:\n");
scanf("%d",&n);
table(n);
getch();
}

int table (int n)
{ int i, c=0;
  for(i=1;i<=10;i++)
  { c = n * i;

  printf("%d*%d=%d\n",n,i,n*i); }
  return c;}*/


	   // odd summation by function

/*void main ()
{ int zebra(int);
 int n,ans;
 clrscr();
 printf("Enter the number:\n");
 scanf("%d",&n);
 ans = zebra(n);
 printf("=%d",ans);
 getch();  }

 int zebra(int n)
{ int c=0,i;
 for(i=1;i<=n;i+=2)
 { c = c + i ;
// printf("+%d",c);
 }
 return c;}*/


	       // square of any number by function

/*void main()
{ int square(int);
  int n,ans;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  ans = square(n);
  printf("=%d",ans);
  getch();}


 int square(int n)
 { int i,c=0;
 //  for(i=1;i<=n;i++)
    c = n * n;
   return c;} */


	      // Avrage sum by Function and array technic

/* void main()
 { float average(int),ans;
   int n;
   //int a[10];
   clrscr();
   printf("how many values?\n");
   scanf("%d",&n);
  // printf("=%d",ans);
   ans= average(n);
   printf("=%f",ans);
   getch(); }

  float average(int n)
  { int i,total=0,c=0;
    int a[10];
    printf("Enter the numbers:\n");
  for(i=1;i<=n;i++)
  { scanf("%d",&a[i]);
    total = total + a[i] ;
    c = total / n; }
    return c;}*/

		      // Types of function

	  // We can use array as a parameter in Function
	  //EX.  int(parameter[array]);


 /* void main()
 {
  int a[10],n,i;
  int max(int[],int);  //<--- You can see array as parameter
  clrscr();
  printf("how many numbers?\n");
  scanf("%d",&n);
  printf("Enter the numbers:\n");
  for(i=1;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("=%d",max(a,n));
  getch();}



 int max(int m[],int l)
 {
  int maximum=0,i;
  for(i=1;i<=l;i++)
  {
   if(m[i]>maximum)
  {
  maximum = m[i];
  }
   }
  return maximum;
  }*/


 /*void square (int[],int[]);   //array added in parameter
 void show (int[]);

 void main()
 { int m[3],n[3];
  int i;
  clrscr();
  for(i=1;i<=3;i++)
  {scanf("%d",&n[i]);}

  square (n,m);
  show (m);
  getch();}


 void square (int a[],int b[])
 { int i;
   for(i=1;i<=3;i++)
   {b[i] = a[i] * a[i];}
   //printf("=%d",b[i]);
   return ; }

   void show (int a[])
   { int i;
   for(i=1;i<=3;i++)
   printf("=%d",a[i]);
   return ;}*/

		      //pointer

      // pointer:- Store address only not value


		  //basic example of pointer

/*void main()
{

 int a,*pa,*pb;
 clrscr();
// a=12;
// b=32;
printf("Enter the number:\n");
scanf("%d",&a);
 pa = &a;
 pb = &a;
 printf("%d=%d\n",a,*pa);
// scanf("%d",&a);
 printf("%d\n",*pa + *pb);
 printf("%d\n",*pa - *pb);
 printf("%d",a);
getch();}  */

//void main()

/* void addition(int,int);
 void subtraction(int,int);
 void multiply(int,int);

 void main()
 { int (*pfun[3])(int,int);
  int i,a=10,b=5,c=0;
  clrscr();
 // printf("Enter values:\n");
  //scanf("%d",&a);
  //scanf("%d",&b);
  pfun[0] = addition;
  pfun[1] = subtraction;
  pfun[2] = multiply;
  for(i=1;i<=3;i++)
  c = pfun[i](a,b);
  {printf("=%d\n",c);}
  getch();}

  void addition(int a,int b)
{ int c=0;
// printf("Enter values:\n");
 //scanf("%d",&a);
// scanf("%d",&b);
// c=a+b;
// printf("=%d",c);
 return a+b;
 getch();
 }

 void subtraction(int a,int b)
 {// c=0;
// c = a-b;
 return a-b;
 getch();
 }

 void multiply(int a,int b)
 {//c=0;
// c = a * b;
 return a*b;
 getch();

 }  */


		  // Example of using pointer to call function by array.



/*int sum(int,int);
int product(int,int);
int subtract(int,int);

int main()
{
  int i=0;
  int a=10;
  int b=5;
  int result = 0;
  int(*pfun[3])(int,int);
  clrscr();

  pfun[0]=sum;
  pfun[1]=product;
  pfun[2]=subtract;

  for(i=0;i<3;i++)
  { result = pfun[i](a,b);
    printf("\nresult=%d",result);}}

   int sum(int x,int y)
   { return x+y;}
   int product(int x,int y)
   {return x*y;}
   int subtract(int x,int y)
   {return x-y;} */


       //second Example of pointer use as call function with array


  /* int addition(int,int);
   int subtraction(int,int);
   int multiply(int,int);

 int main()
{
   int a,b,c,i;
   int (*pfun[3])(int,int);
   clrscr();

   printf("Enter the value of a:\n");
   scanf("%d",&a);
   printf("Enter the value of b:\n");
   scanf("%d",&b);
   pfun[0] = addition;
   pfun[1] = subtraction;
   pfun[2] = multiply;

   for(i=0;i<3;i++)
  {
   c = (pfun[i](a,b));
   printf("\n->result=%d\n",c);
  } }

 int addition(int a,int b)
 { return a+b;}
 int subtraction(int a,int b)
 {return a-b;}
 int multiply(int a,int b)
 {return a*b;}*/


			     //Example 3
			     //call function by pointer

/*int table(int);

 int main()
 {
   int (*pfun[1])(int);
   int i,c;
   int a ;

   clrscr();

  pfun[0] = table;


  for(i=0;i<=0;i++)
   c= pfun[i](a);
  }


   //table

   int table(int a)
 { int x,z=0;
   printf("Enter A:\n");
   scanf("%d",&a);
   for(x=1;x<=10;x++)
   { z= a * x;
   printf("->%d\n",z);
   }
   return z;} */


 int avg(int);

 int main()
{  int a,i,c;
   int (*pfun[1])(int);
   clrscr();

   pfun[0] = avg;

   for(i=0;i<=0;i++)
  { c = pfun[i](a);
  }

   printf("=%d",avg);
  }



   int avg(int a)

 { int i,n,z=0,b[6];
  int result;
   printf("   Limit of avg is 6 \n\n");
   printf("how many digits?\n");
   scanf("%d",&n);
   printf("\nEnter values:\n");
   for(i=1;i<=n;i++)
   { scanf("%d",&b[i]);
    z = z + b[i];}
    result = z / n;
    return result;}

