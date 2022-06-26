#include<stdio.h>
#include<conio.h>

	// Basic Example of Structure topic


/*struct student
{
 int rollno;
 char *name;
 int marks;};

 void main()
 {
   struct student s = {18,"avesh hasnfatta",55};
   clrscr();
   printf("rollno.=%d\n Name = %s\n marks = %d\n",s.rollno,s.name,s.marks);
   getch();} */

    //Structure with array

  /*struct student
  { int rollno;
    char name[10];
    int marks;
    }s[3];

  void main()
 {  int i;
 //int pmarks = 17;
   clrscr();
   printf("Enter the details of the students:\n");

   for(i=0;i<3;i++)
  { scanf("%d%s%d",&s[i].rollno,s[i].name,&s[i].marks);
   }
    for(i=0;i<3;i++)
    {printf("roll no.%d\nname = %s\nmarks=%d\n",s[i].rollno,s[i].name,s[i].marks);

      }

   getch();}  */


   //structure Example with array

  /* struct item
   { char name[10];
     int code;
     int price;
     int qty;
     }it[3];

 void main()

 { int i,flag=0;
   int ipcode;
   clrscr();
   for(i=0;i<3;i++)
 { scanf("%s%d%d%d",it[i].name,&it[i].code,&it[i].price,&it[i].qty);
  }
  printf("\n\n");
  printf("Items are\n\n");
  for(i=0;i<3;i++)
  { printf("Name = %s\t Item code = %d\t Price = %d\t Qty = %dgm\t\n",it[i].name,it[i].code,it[i].price,it[i].qty);

  }

  printf("\nEnter the code for item:");
  scanf("%d",&ipcode);
for(i=0;i<3;i++)
 { if(it[i].code == ipcode)
 { flag = 1;
  printf("Name = %s\t Item code = %d\t Price = %d\t Qty = %dgm\t\n",it[i].name,it[i].code,it[i].price,it[i].qty);
  break;
  }
      }
 if(flag==0)
 printf("not match");



getch();} */


		//Students marks and result system in structure


/*struct student
{  int rollno,marks;
   char name[10];
   }s[3];

  void main()

 { int i,flag=0;
   int code;
   int pmarks=17;
   clrscr();
   printf("Enter the details of 3 students:\n");

   for(i=0;i<3;i++)
 {printf("Enter rollno = ");
 scanf("%d",&s[i].rollno);
 //printf("\n");
 printf("Name = ");
 scanf("%s",s[i].name);
 printf("Marks = ");
 scanf("%d",&s[i].marks);
 printf("\n");

 }
 printf("Note:-Passing marks is compulsory above 17\n");
 printf("Enter the Roll no for Result:-");
 scanf("%d",&code);
 for(i=0;i<3;i++)
 {
 if(s[i].rollno == code)
 {
  flag = 1;
  printf("Name = %s",s[i].name);
  printf("\n");
  printf("Marks = %d",s[i].marks);
  if(s[i].marks > pmarks)
  {
  printf("\n");
  printf("%s is passed",s[i].name);
  }
  if(s[i].marks <= pmarks)
  {
    printf("\n");
    printf("%s is failed",s[i].name);

  }

  }

 }
 if (flag == 0)
 printf("Wrong input");


 getch();}*/
