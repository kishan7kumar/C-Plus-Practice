#include<iostream.h>
#include<conio.h>
void main()
{
  int a[2][4],b[4][2];
  int i,j;
  cout<<"\nenter the values in matrix A: ";

   for(i=0;i<2;i++)               //entering the values
   {
          for(j=0;j<4;j++)
          {
              cout<<"enter element: ";
              cin>>a[i][j];
           }

   }
   clrscr();
   cout<<"the entered matrix a is:"<<endl;
   for(i=0;i<2;i++)                           //displaying the matrix elements
   {
          for(j=0;j<4;j++)
          {

              cout<<" "<<a[i][j];

          }  cout<<endl;
   }

   cout<<"transpose of this a matrix is:"<<endl;

   for(i=0;i<4;i++)            //transpose logic
   {
          for(j=0;j<2;j++)
          {

              b[i][j]=a[j][i];

          }
   }

     for(i=0;i<4;i++)             // displaying the transposed matrix
   {
          for(j=0;j<2;j++)
          {

              cout<<" "<<b[i][j];

          }  cout<<endl;
   }


getch();
}

