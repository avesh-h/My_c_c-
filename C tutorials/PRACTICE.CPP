#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{  /*char str(50);

   printf("Enter the name:\n");
   gets(str);

   printf("%s",str);
   return 0;*/


   //calculator using if else

/*float num1,num2,res;
char op;
clrscr();

printf("Enter num1:\n");
scanf("%f",&num1);
printf("Enter num2:\n");
scanf("%f",&num2);
printf("operations +,-,*,/");
fflush(stdin);
scanf("%c",&op);
if(op == '+')
{res= num1 + num2;
printf("%f",res);}
 else if(op == '-')
{res= num1 - num2;
 printf("%f",res);}
 else if(op == '*')
 {res= num1 * num2;
 printf("%f",res);  }
 else if(op == '/')
 {res= num1 / num2;
 printf("%f",res);}*/


/*long int num,z;
clrscr();
z=0;
printf("Enter the number:\n");
scanf("%ld",&num);
while(num>0)
{
  z= z+num % 10;
  num= num / 10;
}
printf("%ld",z);*/


/*long int digit,sum,i;
clrscr();
sum=0;
printf("Enter the number:\n");
scanf("%ld",&i);
while(i>0)

{
    digit = i%10;
   if (digit %2 !=0)
  {sum = sum + digit;}
   i= i / 10;
     }
    printf("%ld",sum); */


/*long int i,max,num;
clrscr();
printf("Enter the numbers:\n");
scanf("%ld",&num);

while(num>0)
{
if(num%10 > max)

{    max= num%10;
       }
     num= num / 10;}


	     printf("%ld",max);  */


	  //power sum

/*int a,b,i=1;
clrscr();
printf("Enter the number:\n");
scanf("%d",&a);
printf("Enter the power:\n");
scanf("%d",&b);

while(b>=1)

{  i= i * a;
    b--;}
    printf("%d",i);*/


/*int a,b,result;
printf("Enter the number:\n");
scanf("%d",&a);
printf("Enter the power:\n");
scanf("%d",&b);

result= pow(a , b)
printf("%d",result);*/


	//  for understaniding

/*int a,b,i;
clrscr();
for(i=1;i<=6;i++)
{
   for(a=1;a<=i;a++)

{ printf(" %d",i); }
printf("\n");  } */


/*int upper,lower;
char c;
clrscr();
printf("\t  CHECK VOWELS\n");
printf("Enter the character:\n");
scanf("%c",&c);

lower = (c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u');
upper = (c=='A'|| c=='E'|| c=='I' || c=='O' || c=='U');

if(lower || upper)
{printf("This character is vowel");}

else
{printf("This character is not vowel");}*/


			   //factors

/*int number,i;
clrscr();
printf("Enter the number:\n");
scanf("%d",&number);

for(i=1;i<=number;i++)

{   if(number%i == 0)
    { printf(" %d",i);

       }}*/

/*int number,i;
clrscr();
printf("Enter the number:\n");
scanf("%d",&number);

for(i=1;i<=10;i++)
{ printf("%d*%d=%d\n",number,i,number*i);}*/


/*int i,a;
clrscr();
for(i=5;i>=1;i--)
{
  for(a=5;a>=i;a++)
  {  printf(" %d",i);
  }
  printf("\n"); }*/



/*int a,b,z;
clrscr();
printf("Enter the number:\n");
scanf("%d",&a);
printf("Enter the power:\n");
scanf("%d",&b);
z= pow(a,b);
printf("%d",z);*/



/*long int a,z;
clrscr();
z=0;
printf("Enter the digits:\n");
scanf("%ld",&a);
while(a > 0)
{
z =(( z * 10) + a % 10);
a = a / 10 ;  }
printf("%ld",z); */



/*long int a,sum;
clrscr();
sum=0;
printf("Enter the digits:\n");
scanf("%ld",&a);
while(a>0)
{sum+= a % 10;
a= a / 10 ;}
printf("%ld",sum);*/


/*long int a,b;
clrscr();
b=0;
printf("Enter the digits:\n");
scanf("%ld",&a);
while(a>0)
{
  b= (b - (a/10) % 10);   }
  printf("%d",b);  */


/*long int a,b;
clrscr();
b=0;
printf("Enter the digits:\n");
scanf("%ld",&a);
while(a > 0)
{
  b = b+ a%10;
  a=a/10; }
   printf("%ld",b); */

/*int num,i;
clrscr();
printf("Enter the number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++);
{
   if(num%i==0)
   {printf("%d",i);}
		    }  */

getch();  }