#include<iostream.h>
#include<conio.h>
class Operator
{
   int a;
   public:
   void input();
   void display();
   void operator ++();
   void operator --();
   void operator *();
};

void Operator::input()
{
    cout<<"\n\nEnter the number:";
    cin>>a;
}

void Operator::display()
{
    cout<<"\nNumber: ";
    cout<<a;
}
void Operator::operator ++()                 // operator overloaded
{   a=a+1;
}
void Operator::operator --()
{   a=a-1;
}
void Operator::operator *()
{   a=a*5;
}

void main()
{
   clrscr();
   Operator o;
   o.input();
   cout<<"\nCalling Operator (++) Function......"<<endl;
   ++o;                                        // accessing overloaded operator
   o.display();

   o.input();
   cout<<"\nCalling Operator (--) Function......"<<endl;
   --o;
   o.display();

   o.input();
   cout<<"\nCalling Operator (*) Function......"<<endl;
   *o;
   o.display();
   getch();
}
