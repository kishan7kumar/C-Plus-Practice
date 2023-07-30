#include<iostream.h>
#include<conio.h>
class Overload
{

  int a,n;
  public:

  void input()                                 // taking data for X and Y both using same function and storing in a
  {
      cout<<"\n\nEnter no: ";
      cin>>a;
  }

  void operator +(Overload n)              // operator overloading concept here n stores object X value
    {
     a=a+n.a;                             // adding Y element with element of X using n.a
    }

  void show_x ()
    {
      cout<<"\nX= "<<a;
    }

  void show_y ()
   {
     cout<<"\nY= "<<a;
   }
                                           // will run after operator fucntion only
  void sum()
    {
      cout<<a;
    }

   };




void main()
{    clrscr();
    Overload x,y;
    y.input();
    y.show_y();
    x.input();
    x.show_x();
    cout<<"\n\n X+Y= ";
    x+y;                    // calling of operator function
    x.sum();                 // can be called by any object
    getch();
}

