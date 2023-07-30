#include<conio.h>
#include<iostream.h>
void main()
{
   clrscr();

   int i,j,k=4;

   cout<<"\n\n";

   for (i=1;i<=5;i++)
   {
      for(j=1;j<=5;j++)
      {    if(k>=j)        // logic for generating spaces
	   {  cout<<" ";
	   }
	   else
	   { cout<<"*";
	   }
      }
    k--;
    cout<<endl;
   }

    getch();
}