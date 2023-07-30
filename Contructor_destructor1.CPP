#include<conio.h>
#include<iostream.h>
class Number

{  int num;
   public:
   Number()
   {
      num=2;
      cout<<"number is intialy: "<<num;
      getch();
   }
   ~Number()
   {  clrscr();
      
      cout<<"number is dinitialized: "<<num;
      getch();
   }

};

void main()
{    clrscr();

    Number n;
}
