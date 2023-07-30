#include<iostream.h>
#include<conio.h>

class Student
{
  public:
  char name[10];
  int marks;

  void accept()
  {
      cout<<"enter the name: ";
      cin>>name;
      cout<<"enter the marks: ";
      cin>>marks;
  }
   void display()
   {
     cout<<"NAME: "<<endl;
     cout<<name<<endl;
     cout<<"MARKS: "<<endl;
     cout<<marks<<endl;
    }
};

void main()
{
   Student obj;
   obj.accept();
   obj.display();
   getch();
}

