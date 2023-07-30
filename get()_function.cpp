#include<iostream.h>
#include<conio.h>
void main()
{
   char str[10];
   cout<<" enter your name: ";
   cin.get(str,10);              // will not extract after delimiter
   cout<<"entered name is: ";
   cout<<str;
   cout<<"\n Using the getline ";
   cout<<"\n\n enter your name: ";
   cin.getline(str,20,'n');             // will not take characters after n ( use of delimiter in getline)
   clrscr();
   cout<<"\nentered name is: ";
   cout<<str;

   getch();
}