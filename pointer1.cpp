#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int no;
    cout<<"\n\tEnter the number: ";
    cin>>no;
    int *ptr=&no;                                  // pointer declaration
    cout<<"\n\tNumber pointed by pointer: "<<*ptr;
    *ptr=no+1;                                    // pointer storing new value
    cout<<"\n\tNumber pointed by pointer after increment: "<<*ptr;
    getch();
}
