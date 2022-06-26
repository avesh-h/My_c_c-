#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
/*int a,b;
clrscr();
printf("Enter the number:-\n");
scanf("%d",&a);
printf("Enter the second number:-\n");
scanf("%d",&b);
if (a<b)
{printf("=%d",a);}
if(a>b)
printf("=%d",b); */


/*int a,b,c,d,z;
clrscr();
printf("Enter the value of a:\n",a);
scanf("%d",&a);
printf("Enter the value of b:\n",b);
scanf("%d",&b);
printf("Enter the value of c:\n",c);
scanf("%d",&c);
printf("Enter the value of d:-\n",d);
scanf("%d",&d);
z=(a+b+c+d)/4;
if(a+b+c+d !=0)
printf("=%d",z);*/


/*int maths,science,english,social,z,p;
clrscr();
printf("maths:-");
scanf("%d",&maths);
printf("\nscience:-");
scanf("%d",&science);
printf("\nEnglish:-");
scanf("%d",&english);
printf("\ns.s:-");
scanf("%d",&social);
z=maths+science+english+social;
p=(z/4);
if(z<=0)
printf("Total=%d\nPercentage=%d%",z,p);*/



/*int weight,i,c;
clrscr();
c=0;
printf("Enter the weights of 5 boys:-\n");
for(i=1;i<=5;i++)
{
   scanf("%d",&weight);
   if(weight > 50)
   c=c+1;
   }
   printf("%d",c);   */


/*int marks,i,zebra;
clrscr();
printf("Enter the marks of 10 students:-\n");
zebra=0;
for(i=1;i<=10;i++)
{
  scanf("%d",&marks);
  if(marks < 50)
  zebra++;}
  printf("%d",zebra);*/


/*int height,i,a;
clrscr();
printf("Enter the height of 5 students:-\n");
a=0;
do
{ scanf("%d",&height);
if(height < 150)
a++;}
while(a<=5)
printf("%d",a);*/

/*int a=0;
clrscr();
do
{ a++;
printf(" %d ",a);
}
while (a<=9);*/

int a,b,c,ch;
clrscr();
printf("Enter one number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
c= a+b;
printf("=%d\n",c);
printf("do you want to continue?\n");
puts("1.yes");
puts("2.no\n");
printf("Enter the choice:\n");
scanf("%d",&ch);
 while(ch !=0)
{
switch(ch)
{
  case 1:
    clrscr();
    printf("Enter one number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("=%d\n",c);
    printf("do you want to continue?\n") ;
    puts("1.yes");
    puts("2.no\n");
    printf("Enter the choice\n");
    scanf("%d",&ch);
    break;

 case 2:
      exit(0);

	       }
		}









getch();   }