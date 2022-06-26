#include<stdio.h>
#include<conio.h>

void prompt(char *msg, int *num);

void main()

{int i;
clrscr();
 prompt("Enter a num:\n",&i);
 printf("Your number is:%d",i);
 getch();
 }

 void prompt(char *msg, int *num)
 {printf(msg);
 scanf("%d",num);}
