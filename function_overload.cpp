#include<iostream.h>
#include<conio.h>
class Overload
{
    int l,b,a;
    float r;
    public:
    void area(int l,int b);
    void area(float r);
    void area (int a);
};

 void Overload::area(int l, int b)                         //function overload
 {
     cout<<"\nthe area of rectangle is: "<<(l*b)<<endl;
 }

  void Overload::area(float r)
 {
     cout<<"\nthe area of circle is: "<<(3.14*r*r)<<endl;
 }

  void Overload::area(int a)
 {
     cout<<"\nthe area of square is: "<<(a*a)<<endl;
 }

 void main()
 {
      clrscr();
      Overload o;
      o.area(2,3);
      float x=2.5;       // to resolve integer and float ambiguity
      o.area(x);
      o.area(2);
      getch();
 }
