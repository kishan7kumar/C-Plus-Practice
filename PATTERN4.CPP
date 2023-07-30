#include<conio.h>
#include<iostream.h>
void main()

{  clrscr();
   int i,j;
   cout<<"\n\n";
   for (i=1;i<=5;i++)
   {
      for(j=5;j>=i;j--)
      {
	cout<<"*";
      }
      cout<<endl;
   }
   getch();
}