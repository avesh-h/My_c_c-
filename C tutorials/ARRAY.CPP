#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	      //basic example of array

 /* int a[3]={1,2,3};
  char c[3]={'a','b','c'};
  int i;
  clrscr();
  for(i=0;i<=2;i++)
  {
    printf("a[%d]=%d %c\n",i,a[i],c[i]);
     }  */

      // Example

/* int a[5],i;
 char b[5]={'a','b','c','d','e'};
 clrscr();
 printf("Enter the numbers:\n");

 for(i=0;i<=4;i++)
 { scanf("%d",&a[i]);}
 for(i=0;i<=4;i++)
 {printf("a[%d]=%d=%c\n",i,a[i],b[i]);}*/


 /*int a[10],b[10],i,n,sum[10];
 clrscr();
 printf("how many numbers?\n");
 scanf("%d",&n);
 printf("Enter the elements of A:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]) ;}
 printf("Enter the Elements of B:\n");
 for(i=0;i<n;i++)
{scanf("%d",&b[i]);}
 for(i=0;i<n;i++)
 {sum[i] = a[i]+b[i];}
 for(i=0;i<n;i++)
 {printf("=%d\n",sum[i]);}*/



	       //practice of array table

/*int a,b[10],i,sum[10],n;
clrscr();
printf("Enter the number for table:\n");
scanf("%d",&a);
printf("Limit number for table:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{sum[i] = a * i; }
for(i=1;i<=n;i++)
{printf("%d*%d=%d\n",a,i,a*i); }*/


		      //odd even numbers by array

/*int a[10],i,odd=0,even=0;
clrscr();
printf("Enter the 6 digits:\n");

for(i=0;i<10;i++)
{ scanf("%d",&a[i]);
 if(a[i]%2==0)
 { even++;}
 else
 {odd++;}}
 printf("odd=%d,even=%d",odd,even); */


	       //max number with array

/* int a[10],i,n,max=0;
 clrscr();
 printf("how many numbers?\n");
 scanf("%d",&n);
 printf("Enter the numbers:\n");

 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 if ( a[i]%10 > max )
 { max = a[i]%10;
    a[i]=a[i]/10;}}
    printf("max number is=%d",max);  */


/*char s[100],i;
clrscr();
printf("Enter a string:");
scanf("%s",s);

for(i=0;s[i]!='\0';++i)

printf("Length of string:%d",i); */


	//3*3 Matrix in Array. [2-d array] examples below

/*int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
printf("Enter the matrix of A:\n");
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);}
   printf("Enter the Matrix of b:\n");
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
  c[i][j]= a[i][j] + b[i][j] ;}
  printf("Answer is=\n");
  for(i=0;i<3;i++)
{for(j=0;j<3;j++)
 printf(" %d",c[i][j]);
 printf("\n");}      */



/*int row,column,i,j,z[5][5];
clrscr();
printf("Multiplication Table\n");
printf("--------------------\n");

for(i=1;i<=5;i++)
{
  printf(" %d",i);
     }

 for(j=2;j<=5;j++)
 {
  //  column = j + 1;
    printf("\n");
    printf(" %d",j);

  for(i=0;i<=5;i++)
 { z[i][j] = row * column ;
  printf("%d",z[i][j]);
  }}
    }*/


/*int row,column,ROW=5,COLUMN=5,z[5][5];
int i,j;
clrscr();
for(i=0;i<=ROW;i++)
{ row = i;
for(j=0;j<=COLUMN;j++)
{ column =j;
  z[i][j]= row * column;
  printf("%d",z[i][j]);
  }}*/

/*int a[3][3];
int i,j,max=0;
clrscr();
printf("Enter the matrix of A:\n");
for(i=1;i<=3;i++)
{for(j=1;j<=3;j++)
{scanf("%d",&a[i][j]);
  if(a[i][j]>max)
  max=a[i][j];}}
 printf("=%d",max);*/


	  // Matrix example of row converts into column


/* int a[3][3],i,j;
 //int i,j;
 clrscr();
 printf("Enter the matrix of A:\n");
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
 {scanf("%d",&a[i][j]);}}
 printf("matrix row conversion of a[3][3] is\n");

 for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{printf(" %d ",a[j][i]);}
printf("\n");
} */

      // 2-d Example of print access of selected number of matrix

/*int a[3][3],i,j;
clrscr();
printf("Enter:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);  }
}
printf("=%d",a[1][2]);  */


/* int a[10][5],i,j,x,n,total=0,z,b;
 clrscr();
 printf("How many students?\n");
 scanf("%d",&n);
 printf("Enter %d students roll no:\n",n);
 for(c=0;c<n;c++)
{printf("\t");
scanf("%d",b); }
printf("\n");
for(x=1;x<=5;x++)
{printf("Sub:-%d",x);
for(i=1;i<=n;i++)
{for(j=1;j<=5;j++)
scanf("%d",&a[i][j]);
}     }

}

printf("Enter the student number for total:\n");
scanf("%d",&z);
if(z=1)
{ //total = (a[1][1] + a[2][1] + a[3][1] + a[4][1] + a[5][1]);
  printf("%d",a[1][1]+a[2][1]+a[3][1]+a[4][1]+a[5][1]);}*/



      //2-d array example of array each location


/* int a[4][4],i,j,n,x;
 clrscr();
// printf("how many students?\n");
// scanf("%d",&n);
 printf("Enter marks of 4 students:\n\n");
 printf("S1\t S2\t  S3\t  S4\t\n");
 printf("----------------------------\n");
// printf("Hindi:\nEnglish:\nMaths:\nScience:");
 for(i=1;i<=4;i++)
 {for(j=1;j<=4;j++)
 {scanf("%d",&a[i][j]);}}

printf("\nEnter the student number for total:\n");
scanf("%d",&x);
if(x==1)
{
 // total = (a[1][1] + a[2][1] + a[3][1] );
  printf("=%d",a[1][1] + a[2][1] + a[3][1] + a[4][1] );}

if(x==2)
{ printf("=%d",a[1][2] + a[2][2] + a[3][2] + a[4][2]);}*/



/*int a[3][3],row[3],col[3],i,j;
clrscr();
printf("Enter matrix of A:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);
}}

       //summation of individual row & column

printf("Total of row is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
row[i]=0;
row[i]=row[i]+a[i][j];  }
printf("%d\n",row[i]);  }



printf("Total of column is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{col[j] = 0;
col[j]=col[j]+a[j][i];
}
printf("%d\n",col[j]);
}  */


     //2nd method of summation of indi. rows & columns.


/*int a[3][3],row,col,i,j;
clrscr();
printf("Enter matrix of A:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}}


for(i=0;i<3;i++)
{row =0;
 col=0;
 for(j=0;j<3;j++)
 { row = row + a[i][j];
   col = col + a[j][i];
   }
  // printf("=%d\n",row);
   printf("=%d\n",col);
   }
getch();}  */



/*void main()
{
  int a[3][3],b[3][3],i,j,sum,c[3][3],k;
  clrscr();
  printf("Enter the matrix of A:\n");
  for(i=0;i<3;i++)
  {for(j=0;j<3;j++)
  {scanf("%d",&a[i][j]);}}



  printf("Enter the matrix of B:\n");
  for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
 {scanf("%d",&b[i][j]);}}



 for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  { sum=0;
  for(k=0;k<3;k++)
 { sum = (sum + (a[i][k] * b[k][j]));
     c[i][j] = sum ;}} }

   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
   {printf("%d\t",c[i][j]);}

   printf("\n");
   }

  getch();    }*/