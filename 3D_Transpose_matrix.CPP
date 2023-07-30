#include<iostream.h>
#include<conio.h>
void main()
{                                                //multi dimensional array transpose
  int a[2][3][3];
  int i,j;
  cout<<"\nenter the values in matrix A: ";

   for(i=0;i<3;i++)                                            //entering the values
   {
          for(j=0;j<3;j++)
          {
              cout<<"\nenter element: ";
              cin>>a[0][i][j];
          }

   }
   cout<<"\n the entered matrix"<<endl;
   for(i=0;i<3;i++)                                                //displaying entered matrix
   {
          for(j=0;j<3;j++)
          {
              cout<<" "<<a[0][i][j];
           }  cout<<endl;

   }



 cout<<"\n\ntranspose of this matrix is:"<<endl;

   for(i=0;i<3;i++)                                             //transpose logic
   {
          for(j=0;j<3;j++)
          {

              a[1][i][j]=a[0][j][i];

          }
   }

     for(i=0;i<3;i++)                                         // displaying the transposed matrix
   {
          for(j=0;j<3;j++)
          {

              cout<<" "<<a[1][i][j];

          }  cout<<endl;
   }


getch();
}

