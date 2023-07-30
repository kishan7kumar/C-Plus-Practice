#include<conio.h>
#include<iostream.h>
void main()

{  clrscr();
   int i,j,k=1;
   cout<<"\n\n";
   for (i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
	cout<<" "<<k;
	k++;
      }
      cout<<endl;
   }
   getch();
}