#include<iostream>
using namespace std;
int main()
{  int i;
   int j;
   char a[10];
   char b[10];
   cin>>a;

int c=0;
    while(a[i]!='\0')
    {

        i++;
        c++;
    }

    for(j=0,i=c-1;j<c,i>=0; j++, i--)
     {
        b[j]=a[i];

      }
   int count=0;
   for(i=0;i<c;i++)
   {
      if(b[i]==a[i])
      {
          count++;
      }

     }

 if(count==c)
 {
     cout<<"YES";
 }
    else{
        cout<<"NO";
    }
    return 0;
}
