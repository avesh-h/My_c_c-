#include<iostream.h>
#include<conio.h>
#include<fstream.h>


			    //EXAMPLE 1

/*const char *FILENAME = "FILE.txt";

		//THIS PROCESS IS CREATE FILE AND STORE DATA IN FILE
int main()
{
   clrscr();

   ofstream fout (FILENAME);	      //GOTO THE POINTER "FILE.TXT"

   //input of data inside file

   cout<<"Enter your secret password:";
   char str[10];
   cin>>str;


   fout<<str;      //to transfer the data and store in file

   fout.close();      //for close the file which is created

   cout<<endl;




	      //NOW PROCESS IS FOR READ THE DATA IN FILE

   ifstream fin (FILENAME);     //AGAIN GO TO THE POINTER  //used for open file
   char ch;


   while(fin.get(ch)) //to get the whole data from file
	 cout<<ch;
	 fin.close();
	 return 0;
	 }*/

			    //EXAMPLE 2


/*int main()
{
  char data[80];
  ofstream outfile;
  outfile.open("file.dat");    //create and open the file.




  cout<<"Write some data for inside file"<<endl;
  cout<<"Enter your name:";

  cin.getline(data,80);               //get the data which is store in file.

  outfile<<data<<endl;            //Transfer data in file

  cout<<"Enter your id:\n";
  cin>>data;                       //Enter 2nd data
  outfile<<data<<endl;              //again transfer inside file
  cin.ignore();                    //for finish
  outfile.close();                 //close the file

			//Reading data from file

  ifstream infile;	   //create object

  cout<<"Reading from file"<<endl;

  infile.open("file.dat");
  infile>>data;
  cout<<data<<endl;
  infile>>data;
  cout<<data<<endl;
  infile.close();
  return 0;
  }*/


	  //Two differnt types of methods for get and print is used

 int main()
 {
    char n[100];
    clrscr();
    ofstream data;
    data.open("Resume.txt");

	     //Enter data inside file
  cout<<"Enter about info about yourself:\n";
/*  cout<<"Name:";
  cin>>n;
  data<<"Name:"<<n<<endl;
  cout<<"\nCourses:";
  cin>>n;                                 //Method 1
  data<<"Courses:"<<n<<endl;
  cout<<"\nAge:";
  cin>>n;
  data<<"Age:"<<n<<endl;*/
  cin.getline(n,100);
  data<<n<<endl;                 //Method 2
  cin.ignore();
  data.close();

		//openfile and read data


   ifstream pr;
   char m;
   cout<<"Your data is:\n";
   pr.open("Resume.txt");
  /* pr>>n;
   cout<<n<<endl;
   pr>>n;                 //Method 1
   cout<<n<<endl;
   pr>>n;
   cout<<n<<endl;*/

   while(pr.get(m))          //Method 2
   cout<<m;
   pr.close();
   return 0;

   }










