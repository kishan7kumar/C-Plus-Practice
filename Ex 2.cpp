#include<iostream.h>
#include<conio.h>
 class Customer
 {
    private:
    int a,b,temp;
     public:
     void swap();
     void display();

 };

   void Customer::swap()
   {
       a=5;
       b=10;
       cout<<"\na before swapping : "<<a;
       cout<<"\nb before swapping : "<<b;
       temp=a;
       a=b;
       b=temp;
    }

    void Customer::display()
    {
         cout<<"\na after swapping: "<<a;
         cout<<"\nb after swapping: "<<b;
    }



 void main()
 {
      Customer c;
      c.swap();
      getch();
      clrscr();
      c.display();
      getch();
 }