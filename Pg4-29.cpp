#include <iostream.h>
#include <conio.h>

class Office
{    int i, j ,temp,con;
      float pay[10];
      float m[10];
      float n[10];
     float sum;
     public:
     void accept();
     void minmax();

     void avg();
     void count();
};

void Office::accept()
{    cout<<" \n\nEmployees salary data ";
     for(i=0;i<10;i++)
     {   again: cout<<"\nEnter the salary of employee "<<i<<" :";
         cin>>pay[i];
         if (pay[i]==0)
         {
             cout<<"\nEnter valid amount!!!";
             goto again;
         }
      }
}

void Office::minmax()
{
      for(i=0;i<10;i++)
      {
           m[i]=pay[i];
      }

      for(i=0;i<10;i++)
      {
        for(j=0;j<10-i;j++)                    //descending order for getting max salary
          {     if(m[j]<m[j+1])
                {    temp=m[j];
                     m[j]=m[j+1];
                     m[j+1]=temp;
                }
          }
      }
      cout<<"\n\nthe maximum salary is: "<<m[0];
      cout<<"\n\nthe minimum salary is: "<<m[9];
}



void Office::avg()
{    sum=0;
    for(i=0;i<10;i++)
    {    sum=sum+pay[i];
     }
     cout<<"\n\nThe average salary is : "<<(sum/10);
}

void Office::count()
{
      con=0;
      for(i=0;i<10;i++)
      {     if(pay[i]>=1000)
           {   ++con;
           }
     }
     cout<<"\n\nThe number of employees with salary greater than Rs1000 are: "<<con;
 }



void main()
{
     Office obj;
     obj.accept();
     obj.minmax();
     obj.avg();
     obj.count();
     getch();
}

