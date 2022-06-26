#include<stdio.h>
#include<conio.h>

void main()
{
 char *name;
 int a[5],i,total;
 float avg,per;
 clrscr();
 printf("\t\tRESULT\n");
 printf("Enter the name of student:\n");
 gets(name);
 printf("\n");
 printf("\t\t\t%s",name);
 printf("\n");
 printf("\t--------------------------------\n");
 printf("   \tHin    Guj    Math    Sci    Eng\n ");
 printf("\t");
 for(i=0;i<5;i++)
{scanf("%d",&a[i]);}

total = a[0] + a[1] + a[2] + a[3] + a[4];
printf("\nTotal=%d\n",total);
avg = (total / 5.0);
printf("\nAverage=%.2f",avg);
printf("\n");
/*per = ((total / 500.0)*100.0);
printf("Percent of %s =%.2f",name,per);*/



 getch();}
