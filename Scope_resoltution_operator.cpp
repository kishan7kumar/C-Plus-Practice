#include<iostream.h>
#include<conio.h>

class Number
{

  int num1;
  int num2;
  int num3;
  public:
  void add(int,int,int);   // member function with paramter
  //void sub();
};


void Number::add(int x, int y, int z)                     // the method add is declared outside the class (::) is scope operator
{     num1=x;
      num2=y;
      num3=z;
    int result=num1+num2+num3;
    cout<<"the addition is: "<<result<<endl;
}

 void main()
{  clrscr();
   Number n;
   n.add(10,10,10);   // arguments gien during run time
   getch();

}
