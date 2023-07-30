#include<iostream>
using namespace std;
int  main()
{
  int a[50];
  int i,n,j,temp;
  cout<<"\nente+r the total numbers to ordered: ";
  cin>>n;

  for(i=0;i<n;i++)               //entering n numbers
  {  cout<<"\nenter no "<<i<<" : ";
     cin>>a[i];
  }
   cout<<"\n\nthe ascending order of your numbers :";

   for(i=0;i<n;i++)       // Bubble sort logic for ascending order
   {
          for(j=0;j<n-i;j++)
          {
               if(a[j]>a[j+1])
               {   temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
               }
          }
   }
  for(i=0;i<n;i++)            // displaying sorted array
  {    cout<<" "<<a[i];
  }

return 0;
}
