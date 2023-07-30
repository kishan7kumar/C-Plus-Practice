#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
   int i;
   char s1[20],s2[20];
   cout<<"\n\n\tenter string: ";
   cin>>s1;
   for(i=0;i<20;i++)
   {
      s2[i]=s1[i];
   }
    cout<<"\n\tthe copied string is: "<<s2;
   getch();
}

