#include<iostream>
#include<conio>
void main()
{
  again: int num1 = 1;  int num3 = 1; int num2 = 1;  int N = 3;  int n;
  cout<<"\n\nEnter the Nth number of series: ";
  cin>>n;
         if(n==1)
           {
           cout<<"1";
           }
         else if(n==2)
         {
           cout<<"1";
         }
      else
      {
           while(N<30)
      {
          if(N%2!=0)
          {  num3 = num3 * 2;
          }
       else
        {
        num2 = num2 * 3;
        }

        if(n==N)
          {   if(n%2!=0)
             {
              cout<<"\nThe "<<n<<"th number of series is: "<<num3;
             }
             else
              {
              cout<<"\nThe "<<n<<"th number of series is: "<<num2;
              }
           break;
          }
           N++;
       }//while loop closed
   }//else loop closed
    goto again;
   getch();
}
