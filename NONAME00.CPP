#include<iostream.h>
#include<conio.h>
class myclass
{   public:
   void increment()
   {
      static int i=5;
      cout<<i<<endl;
      i++;
      }

      public:
      void display()
      {
         cout<<"calling increment for first time:"<<endl;
         increment();
          cout<<"calling increment for second time:"<<endl;
          increment();
          cout<<" original:"<<i;

          }
          };
   int main()
         {   clrscr();
           myclass m1;
           m1.display();
           getch();
           return 0;
         }

