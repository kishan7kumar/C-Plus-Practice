#include<iostream.h>
#include<conio.h>

class functioncall
{
    int number;
    public:
    functioncall();                                 //constructor


};

   int square(int num)                            // called function +      //call by value method
   {
     num=num*num;
     cout<<"\nthe called square function has value: "<<num;
     return num;
    }

      functioncall::functioncall()              // calling function +  //scope operator for declaring methods
    {        number=10;
            square(number);
            cout<<"\nvalue of original calling function number: "<<number;
    }

    void main()
{  clrscr();
   functioncall f1;
   getch();

}
