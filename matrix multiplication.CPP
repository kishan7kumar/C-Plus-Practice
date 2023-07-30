#include<iostream.h>
#include<conio.h>

void main()
{
  int a[3][3];
  int b[3][3];
  int c[3][3];
  int i,j,k;


  cout<<"\nenter the values in matrix A: "<<endl;

   for(i=0;i<3;i++)                              //entering the values in A
   {
          for(j=0;j<3;j++)
          {
              cout<<"\nenter element ("<<i<<","<<j<<") : ";
              cin>>a[i][j];
           }

   }
   clrscr();
   cout<<"the entered matrix A is:"<<endl;
   for(i=0;i<3;i++)                                 //displaying the values in A
   {
          for(j=0;j<3;j++)
          {

              cout<<" "<<a[i][j];

          }  cout<<endl;
   }
   cout<<"\n\nenter the values in matrix B: ";

   for(i=0;i<3;i++)                              //entering the values in B
   {
          for(j=0;j<3;j++)
          {
               cout<<"\nenter element ("<<i<<","<<j<<") : ";
              cin>>b[i][j];
           }

  }

  cout<<"\n\nthe entered matrix B is:"<<endl;
   for(i=0;i<3;i++)                                //displaying the matrix elements of B
   {
          for(j=0;j<3;j++)
          {

              cout<<" "<<b[i][j];

          }  cout<<endl;
   }
   getch();
  clrscr();


   cout<<"\t\t\tmultiplication of the matrix A and B is:"<<endl;

 for(i=0;i<3;i++)                                       //Addition logic
   {
          for(j=0;j<3;j++)
          {    c[i][j]=0;
              for(k=0;k<3;k++)
              {
              c[i][j]+=a[i][k]*b[k][j];
              }
          }
   }


      cout<<"\n matrix A"<<endl;
      for(i=0;i<3;i++)                                 //displaying the values in A
   {
          for(j=0;j<3;j++)
          {

              cout<<" "<<a[i][j];

          }  cout<<endl;
   }





    cout<<"\n Matrix B "<<endl;
   for(i=0;i<3;i++)                                //displaying the matrix elements of B
   {
          for(j=0;j<3;j++)
          {

              cout<<" "<<b[i][j];

          }  cout<<endl;
   }

     cout<<"\nMatrix C "<<endl;
     for(i=0;i<3;i++)             // displaying the multiplied matrix C
   {
          for(j=0;j<3;j++)
          {

              cout<<c[i][j]<<"   ";

          } cout<<endl;
   }


getch();
}

