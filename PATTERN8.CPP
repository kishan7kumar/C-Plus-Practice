#include<conio.h>
#include<iostream.h>
void main()

{  clrscr();

   int i,j;


   cout<<"\n\n";

   for (i=1;i<=5;i++)      //upper triangle
   {
      for(j=1;j<=i;j++)
      {
	cout<<"*";

      }
      cout<<endl;
   }

   for (i=1;i<=5;i++)     //lower triangle
   {
      for(j=4;j>=i;j--)
      {
	cout<<"*";

      }
      cout<<endl;
   }

   getch();
}