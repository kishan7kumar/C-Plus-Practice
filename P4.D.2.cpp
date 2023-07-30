#include <iostream.h>
#include <conio.h>
 class Customer
 {
     int n;
     int a[60];
     int  i,j,temp;
     public:
     void accept()
     {
     cout<<"\nenter the number of customers: ";
     cin>>n;

     for(int i=0; i<n; i++)
     {
     cout<<"\nenter the amount for "<<i<<" customer: Rs ";
     cin>>a[i];
     if ( a[i]==0)
     cout<<"c\nannot enter 0 amount!!!!";                      // use of continue statement 
     continue;
     }

     }

     void display()
     {   clrscr();
        cout<<"\n\nthe amount in asceneding order is: ";
        for( i=0;i<n;i++)                                        // bubble sorting technique
        {
            for ( j=0 ; j<n-1; j++)
            {     if(  a[j]>a[j+1])                              // use < for descending order
                  {
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                  }
            }
        }

        for ( i=0;i<n;i++)
        {
          cout<<a[i]<<",";
        }



     } //display closed
 };

 void main()
 {
     Customer c;
     c.accept();
     c.display();
     getch();
 }











