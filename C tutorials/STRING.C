#include<stdio.h>
#include<conio.h>
#include<string.h>

/*void main()
{char s[40],i;
clrscr();
printf("Enter a string:");
scanf("%s",s);

for(i=0;s[i]!='\0';i++)
{}
printf("Length of string:%d",i);
getch();} */

/*void main()
{ int a=0;
  char s[40];
  clrscr();
  printf("Enter string:\n");
  scanf("%[^\n]",s);
  while(s[a]!='\0')
  {a++;}
  printf("=%d",a);
  getch(); } */


/* void main()
  {
    int a=0,b=1;
    char s[20];
    clrscr();
    printf("Enter the string:\n");
    scanf("%[^\n]",s);

    while(s[a]!='\0')
   { if(s[a]== ' ')
      b++;
      a++;
      }
  printf("=%d",b);
  getch();} */

  //2 methods of taking input

/* void main()
 {int i,len=0;
 char a[10];
 clrscr();
 printf("Enter the string:\n");
 gets(a);
 //scanf("%[^\n]",a);
 for(i=0;a[i]!='\0';i++)
 {len++;
 }
  printf("%d",len);
 getch();}  */


 //counting of words with header file included (strlen)

 /*void main()
 {
  int count;
  char a[30];
   clrscr();
   printf("Enter string:\n");
   gets(a);
   count = strlen(a);
   printf("len is =%d",count);
   getch();
   }*/



/*int main()
{ int tmp,i;
  char str[30];
  printf("Enter string:\n");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i-1]==' '|| i==0)
    {
     if(str[i]>='a' && str[i]<='z')
     str[i]=str[i]-32;
     else
     if(str[i]>='A' && str[i]<='Z')
     str[i]=str[i]+32;
     }
     printf("%c",str[i]);
     }
     getch();
     return 0;
     }  */



     //skip the letters in output as per given numbers.

 /* void main()
 {char name[10];
  clrscr();
  printf("Enter the name:\n");
  gets(name);
  printf("%s",&name[2]);
  getch();}  */


  //concatenate of 2 diffrent input(string) together in output. (strcat)

 /* void main()
 {int a;
 char s1[20],s2[10];
 clrscr();
 printf("Enter string s1:\n");
 gets(s1);
 printf("Enter string s2:\n");
 gets(s2);
 strcat(s1,s2);
// strncat(s1,s2,5);
 printf("%s",s1);
 getch();} */

       //concatenate without strcat

/* void main()
 {int len1,len2,i;
  char s1[20],s2[10];
  clrscr();
  printf("Enter string s1:\n");
  gets(s1);
  printf("Enter string s2:\n");
  gets(s2);
  len1= strlen(s1);
  len2= strlen(s2);
  for(i=0;i<=len2;i++)
  {s1[len1+i]=s2[i];}
  printf("%s",s1);
  getch();}  */


 /*void main()
 { int i,c=0;
  char a[10];
  clrscr();
  printf("Enter String:\n");
  gets(a);
  for(i=0;i<=a[i];i++)
  { if(a[i]=='a')
  {  c++;}}
  printf("=%d",c);
  getch();}*/

  //single alphabet present and position

/* void main()
 { char s[20],c;
   int i,l=0,a=0;
   clrscr();
   printf("Enter the string:\n");
   gets(s);
 while(s[l]>=0)
 {l++;}
 fflush(stdin);
 printf("Enter the alphabet:\n");
 scanf("%c",&c);

for(i=0;i<l;i++)
{
if (s[i]==c)
{a=1;
printf("%d",i+1);} }
//else
//{printf("not present");}
 if(a==0)

{printf("not present");}

 getch();

 }     */





