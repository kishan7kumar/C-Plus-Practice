#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
  int a[2][1][6];
  int i,j,k,sum;

  for(k=0;k<2;k++)                     //entering data
  {
     cout<<"\nstudent"<<k<<": ";
     for(i=0;i<1;i++)
    {
       for(j=0;j<6;j++)
       {
            cout<<"Enter the marks of subject "<<j<<" :";
            cin>>a[k][i][j];

            }
    }

   }
    clrscr();
   cout<<"\n\nsrno\t\tphysic maths  chemistry physical biology english     TOTAL";

   for(k=0;k<2;k++)                                                                 // displaying data
  {
     cout<<"\nstudent "<<k<<": ";
     for(i=0;i<1;i++)
    {   sum=0;
       for(j=0;j<6;j++)
       {

            cout<<"        "<<a[k][i][j];
            sum=sum+a[k][i][j];
            }
    }
    cout<<"\t"<<sum;
   }

   getch();

   }