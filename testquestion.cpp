#include <iostream>
using namespace std;
int  main()
{

    int temp;
    int sum = 0;
    int t;
    int i,j,n;   //total number of students
    int a[5];  //max number of students is 10

    cout<<"enter the number of students: ";
    cin>>n;

    for(i= 0;i<n;i++)
    {
       cout<<"enter the marks of student "<<i<<": ";
       cin>>a[i];

    }

    for(i = 0; i<n ; i++)
    {
       for(j = 0; j<n-i;j++)
       {     if(a[j]<a[j+1])
              {    temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp;
              }
        }
    }
   cout<<"\n\n\t\t\tenter the number of toppers u want: ";
   cin>>t;
   for(i = 0; i<t; i++)
    {
       sum = sum + a[i];
    }
    cout<<"\t\t\t\t"<<sum;
  return 0;
}
