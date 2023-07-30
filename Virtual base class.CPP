#include<iostream.h>
#include<conio.h>
                                                  // Example of Resolving Ambuiguity in Multiple Inheritance
class Base                                       // base class
{
   public:
   int a;
   int b;

};

    class Derived1 : virtual public Base                   // derived class 1 which derives member from virtual base class
    {  public:
                                           //access specifier needed remeber always !!!
    void display()
    {    a=5;
         cout<<"\n\nvalue of A: ";
         cout<<a;
    }
    };


  class Derived2 : virtual public Base                     // derived class 2 which derives member from Virtual base class
   {  public:

    void display( )
    {    b=4;
         cout<<"\n\nvalue of B: ";
         cout<<b;
    }

    };

    class Derived3 :public Derived1, public Derived2                    // Derived class 3 which derives from above derived classes
    {  public:
    void display()
    {
        cout<<"\n\nthe sum is : ";
         cout<<a+b;

     }
     };

 void main()
   {    clrscr();
        Derived3 obj3;                  // object of derived class 3
        obj3.Derived1::display();        // use of scope resolution operator to resolve same function name ambiguity
        obj3.Derived2::display();
        obj3.Derived3::display();
        getch();
   }


