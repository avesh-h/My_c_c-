#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{ int a[10],b,c=0,n,i,ch,g,top;
  clrscr();
  puts("1.Addition");
  puts("2.Subtraction");
  puts("3.Multiplication");
  puts("4.Division");

  printf("\nEnter the Choice:\n");
 scanf("%d",&ch);


 switch(ch)
{
 case 1:
	 top:
	 clrscr();
	 printf("How many digits?\n");
	 scanf("%d",&n);
	 printf("\n");
	 printf("Enter Numbers:\n");
	 c=0;
	 for(i=1;i<=n;i++)
	 {scanf("%d",&a[i]);
	 c= c + a[i];}
	 printf("=%d",c);


	 printf("\nEnter choice:\n");
	 puts("1.Again");
	 puts("2.Exit");
	 scanf("%d",&g);

      switch(g)
 {    case 1:
	       goto top;

	       break;

      case 2:
	    exit(0);
	    break;}

	   break;}










getch();}