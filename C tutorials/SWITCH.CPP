#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()

{
   int a,b,ch;
   float d,e,f;
   while(ch !=0)

 {  clrscr();
   puts("1.Plus");
   puts("2.Minus");
   puts("3.Multiplication");
   puts("4.Division");
   puts("5.Exit\n");
   printf("Enter the choice:-\n");
   scanf("%d",&ch);
 // while(ch !=5)
 switch(ch)
 {
  case 1:

      printf("Enter the one value:\n");
      scanf("%d",&a);
      printf("Enter second value:\n");
      scanf("%d",&b);
      c=a+b;
      printf("=%d\n",c);
      break;

  case 2:

	printf("Enter one value:\n");
	scanf("%d",&a);
	printf("Enter second value:\n");
	scanf("%d",&b);
	c=a-b;
	printf("=%d",c);
	break;

  case 3:

     printf("Enter one value:\n");
     scanf("%d",&a);
     printf("Enter second value:\n");
     scanf("%d",&b);
    c=a*b;
     printf("=%d",c);
     break;

   case 4:


      printf("Enter one value:\n");
      scanf("%f",&d);
      printf("Enter second value:\n");
      scanf("%f",&e);
      f=d/e;
      printf("=%.2f",f);
      break;

  case 5:

     exit(0);










  }


}

   getch();}