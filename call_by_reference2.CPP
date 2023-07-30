#include<iostream.h>
#include<conio.h>

class functioncall


{
    int number;
    public:
    functioncall();                                 //constructor


};

   int square(int &num)                               //call by reference method
{
     num=num*num;
     cout<<"\n\nthe called square function has value: "<<num;
     return num;
}


     functioncall::functioncall()              //scope operator for declaring methods here fucntioncall() is constructor
   {        number=10;
            square(number);
            cout<<"\n\nvalue of original calling function number: "<<number;
    }

    void main()
{  clrscr();
   functioncall f1;           //only create object as it will directly access the constructor
   getch();

}
