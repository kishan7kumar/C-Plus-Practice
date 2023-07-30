#include<conio.h>
#include<iostream.h>
void main()

{  clrscr();
   int i,j;
   cout<<"\n\n";
   for (i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
	cout<<j;
      }
      cout<<endl;
   }
   getch();
}