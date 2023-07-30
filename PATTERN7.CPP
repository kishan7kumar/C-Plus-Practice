#include<conio.h>
#include<iostream.h>
void main()

{  clrscr();

   int i,j,k=65;
   char a;

   cout<<"\n\n";

   for (i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      { a=k;
	cout<<" "<<a;
	k++;
      }
      cout<<endl;
   }

   getch();
}