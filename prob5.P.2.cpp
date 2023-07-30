#include <iostream.h>
#include <conio.h>
class Arrayaddition
{
     int i,j;
     int a[3][3];
     int b[3][3];
     int c[3][3];
     public:
     void accept();
     void calculate();
     void display();
};

void Arrayaddition::accept()
{   cout<<"\n\nEnter element of 1st array -----------"<<endl;

    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {
            cout<<"enter element: ";
            cin>>a[i][j];
         }
     }

    cout<<"\n\nEnter element of 2nd array -----------"<<endl;

    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {
            cout<<"enter element: ";
            cin>>b[i][j];
         }
     }
                                          
}

 void Arrayaddition::calculate()
 {
      for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {

            c[i][j]=a[i][j]+b[i][j];
         }
     }

  }

 void Arrayaddition::display()
 {   cout<<"\n\n the added array is : "<<endl;
        for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {

            cout<<c[i][j]<<"  ";
         }
       cout<<endl;
    }
 }


  void main()
  {
       Arrayaddition obj;
       obj.accept();
       obj.calculate();
       obj.display();
       getch();
  }






