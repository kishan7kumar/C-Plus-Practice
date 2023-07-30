#include <iostream.h>
#include <conio.h>

 void main()
 {   clrscr();
     char a[5];

     int i;

     for(i=0;i<5;i++)
     {
     cout<<"\nenter the  amount: ";
     cin>>a[i];
     }
      int j=0;
     while(j<5)
     {
       float temp;
       if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
           j=0;
         }

        j++;

       }                // while closed
       cout<<"the amount in ascending order";
      for(j=0;j<5;j++)
      {
          cout<<a[j];
      }
     getch();
}



























