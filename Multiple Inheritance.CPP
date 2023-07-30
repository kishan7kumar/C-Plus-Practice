#include<iostream.h>
#include<conio.h>
                                                  // Example of Multiple Inheritance
class Base1                                       // base class 1
{
   public:
   int a;
   public:
   void display()
   {  a=5;
      cout<<"\n\nnumber in Base class 1: ";
      cout<<a;

   }

};

  class Base2                                         // base class 2
   {  public:
       int b;
       public:
    void display()
   {  b=6;
      cout<<"\n\nthe number in Base class 2: ";
      cout<<b;
   }

    };


  class Derived: public Base1, public Base2                    // derived class which derives member from base class 1 and 2
   {  public:
      void display()
      {
      cout<<"\n\nthe addition of numbers in Derived class is : ";
      cout<<a+b;
      }
    };



 void main()
   {    clrscr();

        Derived obj;             // object of derived class only
        obj.Base1::display();    // scope resolution operator is used to resolve ambuigity
        obj.Base2::display();
        obj.Derived::display();
        getch();
   }


