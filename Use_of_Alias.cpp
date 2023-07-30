#include<iostream.h>
#include<conio.h>
 class Alias
 {
     int num;
     public:
     void display( );
 };

 void Alias :: display( )
 {   num=2;
    int &anum=num;                                         //syntax of using alias
    cout<<"Num = "<<num<<" Alias Enum = "<<anum<<endl;
    cout<< "\nnum is increased......."<<endl;
    num+=1;
    cout<<"Num = "<<num<<" Alias Enum = "<<anum<<endl;
    cout<< "\nenum is increased......."<<endl;
    anum+=1;
    cout<<"Num = "<<num<<" Alias Enum = "<<anum<<endl;
 }

 void main( )
 {
    clrscr( );
    Alias a;
    a.display();
    getch( );
 }
