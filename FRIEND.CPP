#include<iostream.h>
#include<conio.h>
class Student
{
   private:
   char name[20];          // name variable is private
   public:
   int roll_no;
   friend class Sir;      // friend class declared
};
 class Sir
{   public:
    void accept()  // accepting details
   {   clrscr();
       Student A1;     //accessing friend class members by creating object or instance of Student Class
       cout<<"\nenter student name: ";
       cin>>A1.name;    //syntax for accessing variables
       cout<<"\nenter student roll no: ";
       cin>>A1.roll_no;
   }
   void display()   // displaying details
   {   clrscr();
      Student A1;
      cout<<"\n\n\STUDENT NAME: "<<A1.name;
      cout<<"\n\nSTUDENT ROLL NO: "<<A1.roll_no;
    }
};
  void main()
  {
      Sir S1;
      S1.accept();
      S1.display();
      getch();
   }