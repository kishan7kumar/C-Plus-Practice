#include<iostream.h>
#include<conio.h>
int increment(int &x)                            // call by reference method use of & operator points address

{
    x=x+10;
    cout<<" the number in increment method: "<<x<<endl;
    return x;

}
 void main()
{  clrscr();
   int no,a;
   cout<<"enter the number: "<<endl;
   cin>>no;
   a=increment(no);
   cout<<" the incremented value: "<<a<<endl;
   cout<<"the original entered number "<<no<<endl;
   getch();

}
