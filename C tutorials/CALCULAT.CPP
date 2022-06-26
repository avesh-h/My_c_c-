#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  int a,b,ch,c,z,g,s;
  float d,e,f,i,j,k,l,m;
  clrscr();

  top:
  puts("1.Plus");
  puts("2.Minus");
  puts("3.Multiplication");
  puts("4.Division");
  puts("5.Average");
  puts("6.Percentage");
  puts("7.Power");
  puts("8.Exit");

  printf("\n\nEnter your choice:\n");
  scanf("%d",&ch);

  switch(ch)
  {
     case 1:
	    clrscr();
	    printf("Enter one value:\n");
	    scanf("%d",&a);
	    printf("Enter second value:\n");
	    scanf("%d",&b);
	    c= a + b;
	    printf("=%d",c);
	    printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

	    break;

       case 2:
	      clrscr();
	    printf("Enter one value:\n");
	    scanf("%d",&a);
	    printf("Enter second value:\n");
	    scanf("%d",&b);
	    c= a - b;
	    printf("=%d",c);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

	    break;

       case 3:

	    clrscr();
	    printf("Enter one value:\n");
	    scanf("%d",&a);
	    printf("Enter second value:\n");
	    scanf("%d",&b);
	    c= a * b;
	    printf("=%d",c);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

	    break;

       case 4:


	    clrscr();
	    printf("Enter one value:\n");
	    scanf("%f",&d);
	    printf("Enter second value:\n");
	    scanf("%f",&e);
	    f= d / e;
	    printf("=%.2f",f);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

	    break;

       case 5:
		clrscr();
		printf("How many numbers of average\n");
		puts("1.[3]");
		puts("2.[4]");
		puts("3.[5]");
		scanf("%d",&g);

	  switch(g)

	  {
	    case 1:
		  clrscr();
		  printf("Enter 3 values\n");
		  scanf("%f %f %f",&i,&j,&k);
		  d= (i + j + k) / 3;
		  printf("=%.2f",d);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

		  break;

	    case 2:

		  clrscr();
		  printf("Enter 4 values\n");
		  scanf("%f %f %f %f",&i,&j,&k,&l);
		  d= ((i + j + k + l) / 4);
		  printf("=%.2f",d);
	  printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

		  break;

	    case 3:

		  clrscr();
		  printf("Enter 5 values\n");
		  scanf("%f %f %f %f %f",&i,&j,&k,&l,&m);
		  d= ((i + j + k + l + m) / 5);
		  printf("=%.2f",d);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

		  break; }




	    case 6:
		     clrscr();
		     printf("Enter your total marks:\n");
		     scanf("%f",&d);
		     printf("out of total:\n");
		     scanf("%f",&e);
		     f= ((d / e)*100);
		     printf("=%.2f %",f);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

		     break;

	   case 7:
		   clrscr();
		   printf("Enter the number:\n");
		   scanf("%d",&a);
		   printf("Enter the value of power:\n");
		   scanf("%d",&b);
		   c=1;
		   while(b>=1)
		  { c= c * a;
		   b--;   }

	      printf("%d",c);
	     printf("\n\n\n");
	    puts("1.Menu");
	    puts("2.Exit");
	    scanf("%d",&s);

	    switch(s)
	    {
	      case 1:
			  clrscr();

		       goto top;
		       break;


	   case 2:
			 exit(0);    }

		     break;





	     case 8:
		       exit(0);
				  }


  getch(); }
