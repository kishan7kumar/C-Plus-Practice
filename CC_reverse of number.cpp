#include<iostream.h>
#include<conio.h>

void main()
{
   int n;
   int rev = 0;
   int d;
   cout<<"enter the number: ";
   cin>>n;
   while(n!=0)
   {
     d = n%10;      //gives the remainder
     rev = rev*10+d;
     n = n/10;       //giver the quotient
   }

   cout<<"reverse of number is: "<<endl;
   cout<<rev;
   getch();
}