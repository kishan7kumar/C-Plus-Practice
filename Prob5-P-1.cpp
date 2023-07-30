#include<iostream.h>
#include<conio.h>
class Student
{  int i,j;
   int info[3][6];
   int sum[10];
   public:
   void accept();              //accepts  3 student marks
   void calculate();           // calculate total marks in 6 subjects
   void display();             // display tha data in tabular form
};

 void Student::accept()
 {
     for(i=0;i<3;i++)
     {  cout<<"\nEnter marks of student "<<i<<" -------------";
         for(j=0;j<6;j++)
        {
           back:
            cout<<"\nEnter marks of subject "<<j<<" : ";
            cin>>info[i][j];
            if(info[i][j]>100)
            {    cout<<"\n!!!!!!   enter valid marks    !!!\n";
                 goto back;
            }
        }
     }
 }

 void Student::calculate()
 {

       sum[0]=0;
       sum[1]=0;
       sum[2]=0;
       for(i=0;i<3;i++)
       {
          for(j=0;j<6;j++)
          {    sum[i]=sum[i]+info[i][j];

           }
       }
  }

  void Student::display()
  {       clrscr();
          cout<<"\n\n\*******************   STUDENT DATA   ****************************\n\n";
           for(i=0;i<3;i++)
           {     cout<<"student "<<i<<"  ";

                  for(j=0;j<6;j++)
                 {
                     cout<<info[i][j]<<"   ";
                 }
                 cout<<sum[i];
                 cout<<endl;
            }

    }



 void main()
 {
      Student obj;
      obj.accept();
      obj.calculate();
      obj.display();
      getch();
 }
