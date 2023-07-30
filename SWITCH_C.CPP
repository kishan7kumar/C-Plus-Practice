#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  char op;
  int a,b;
  cout<<"\nenter the first number: ";
  cin>>a;
  cout<<"\nenter the second number: ";
  cin>>b;
  cout<<"\nenter the operator: ";
  cin>>op;

  switch(op)
  {
    case '+':
     cout<<"\nadittion is: "<<a+b;
     break;
     case '-':
     cout<<"\nsubtraction is: "<<a-b;
     break;
     case '*':
     cout<<"\nmultiplication is: "<<a*b;
     break;
     case '/':
     cout<<"\ndivision is: "<<a/b;
     break;
     default:
     cout<<"invalid operator";

     }
     getch();
     }
