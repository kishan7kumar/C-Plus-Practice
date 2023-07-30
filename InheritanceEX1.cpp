#include<iostream.h>
#include<conio.h>
                                                  // Example of Heierachial Inheritance
class Base                                       // base class
{
   public:
   int a;
   int b;

};

    class Derived1 : virtual public Base                   // subclass 1 which derives member from base class
    {  public:
                                           //access specifier needed remeber always !!!
    void display()
    {    a=5;
         cout<<"value of A: ";
         cout<<a;
    }
    };


  class Derived2 : virtual public Base                     // subclass 2 which derives member from base class
   {  public:

    void display( )
    {    b=4;
         cout<<"value of B: ";
         cout<<b;
    }

    };

    class Derived3 :public Derived1, public Derived2                    // subclass 2 which derives member from base class
    {  public:
    void display()
    {
        cout<<"the sum is : ";
        cout<<a+b;

     }
     };

 void main()
   {    clrscr();
        Derived3 obj3;
        obj3.Derived1::display();
        obj3.Derived3::display();
        obj3.Derived3::display();
        getch();
   }


