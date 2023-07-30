#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5][2];                                            // billing table using two dimensional matrix

  int i,n;
  cout<<"\nenter the number of person(max 5 persons): ";
  cin>>n;

   for(i=1;i<=n;i++)
   {
              cout<<"\ncustomer no "<<i;
              cout<<"\nenter the number: ";
              cin>>a[i][0];                                 // i depicts the row and 0 represents first column
              cout<<"\nenter the balance: ";
              cin>>a[i][1];                                // second column
  }


   clrscr();
   cout<<"\t\t\t****** CUSTOMER DETAILS ***********"<<endl;
   
   cout<<"\t\t\t PHONE NUMBER\t\t BALANCE";
   for(i=1;i<=n;i++)
   {
         cout<<"\n\t\t\t"<<i<<". +91"<<a[i][0]<<"\t\t Rs."<<a[i][1]<<endl;
   }


getch();

}


