#include<iostream.h>
#include<conio.h>

void main()
{
  int a[3][6][6];
  int i,j,k,m,n,o,p;
 back:
 cout<<endl;
 cout<<"\nEnter the number of rows and column of Matrix A: ";
 cin>>m>>n;
 cout<<"\nEnter the number of rows and column of Matrix B: ";
 cin>>o>>p;

 if(n!=o)
 {  cout<<" \n\nMultiplication not possible!!!!!!!!!!!!! Enter again ";           //column of A should be equal to row of B
   goto back;
 }


 cout<<"\nenter the values in matrix A: "<<endl;

   for(i=0;i<m;i++)                                               //entering the values in A
   {
          for(j=0;j<n;j++)
          {
              cout<<"enter element ("<<i<<","<<j<<") : ";
              cin>>a[0][i][j];
           }
}

cout<<"\n matrix A: "<<endl;

   for(i=0;i<m;i++)                                                  //display values of A
   {
          for(j=0;j<n;j++)
          {
              cout<<" "<<a[0][i][j];

           } cout<<endl;
}

cout<<"\nenter the values in matrix B: "<<endl;

   for(i=0;i<o;i++)                                               //entering the values in B
   {
          for(j=0;j<p;j++)
          {
              cout<<"enter element ("<<i<<","<<j<<") : ";
              cin>>a[1][i][j];
           }

   }

cout<<"\n matrix B: "<<endl;

   for(i=0;i<o;i++)                                               //display the values in B
   {
          for(j=0;j<p;j++)
          {
              cout<<" "<<a[1][i][j];

           } cout<<endl;

   }


cout<<"\t\t\tmultiplication of the matrix A and B is:"<<endl;

 for(i=0;i<m;i++)
   {
          for(j=0;j<p;j++)
          {    a[2][i][j]=0;
              for(k=0;k<n;k++)
              {
              a[2][i][j]+=a[0][i][k]*a[1][k][j];
              }
          }
   }



     cout<<"\nMatrix C "<<endl;
     for(i=0;i<m;i++)                                         // displaying the multiplied matrix C
   {
          for(j=0;j<p;j++)
          {

              cout<<"   "<<a[2][i][j];

          } cout<<endl;
   }


getch();
}

