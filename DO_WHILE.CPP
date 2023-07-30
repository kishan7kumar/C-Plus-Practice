#include<iostream.h>
#include<conio.h>
class Summation
{  public:
   int sum ;
   int i ;
   void sum1()
   {  sum=0;
      i=1;
      do
      {  sum=sum+i;
	 i++;
	 if(sum==10)   //use of break statement to come out of loop
	 break;
      } while(i<=100) ;

   }
     void display()
     {
	cout<<"\n\n\n\tsum is: "<<sum;
     }
};

int main()
{
   clrscr();
   Summation s1;
   s1.sum1();
   s1.display();
   getch();
   return 0;
}