#include<iostream.h>
#include<conio.h>
class Continue
{    public:
    int n;
    char reply;



    void accept()
 {    clrscr();
      cout<<"**************** THIS PROGRAM IS MADE BY KISHAN KUMAR *****************";
      cout<<"\n\n\nEnter the number: ";
      cin>>n;
 }
       void display()
 {

	if(n%2==0)     //odd even logic
	{  cout<<"\n\n"<<n<<" is even number";
	}
	else
	{  cout<<"\n\n"<<n<<" is odd number";
	}
   go:
	cout<<"\n\n\n\Do you want to continue(y/n)? : ";
	cin>>reply;
	if(reply=='y'||reply=='Y')
	{
	   accept();
	   display();
	}
       else if(reply=='n'||reply=='N')
	{ clrscr();
	cout<<"**************** THIS PROGRAM IS MADE BY KISHAN KUMAR *****************";
	cout<<"\t\t\n\nthank you for using the program\n\n press ENTER to exit........ ";
	}
	else
	 {
	    cout<<"\n\n\n\t\t\tInvalid Reply!!!! Enter again ";
       goto go;

	 }
}
};
void main()
{  clrscr();
   Continue c1;
   c1.accept();
   c1.display();
   getch();
}
