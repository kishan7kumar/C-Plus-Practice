#include<iostream.h>
#include<conio.h>
class Car
{
    float price;
    int mileage;
    char model[20];
    public:
    void display()
    {
       cout<<"\nthe price is : ";
       cout<<price;
       cout<<"\nthe mileage is: ";
       cout<<mileage;
       cout<<"\nthe model is: ";
       cout<<model;

    }


    void accept()
    {
       cout<<"\nenter price: ";
       cin>>price;
       cout<<"\nenter mileage: ";
       cin>>mileage;
        cout<<"\nenter model name: ";
       cin>>model;
    }
  };

  void main()
  {
      Car arr[1];                        //declaring array for class car
      arr[0].accept();
      //arr[1].accept();
      clrscr();
      arr[0].display();
      //arr[1].display();
      getch();
  }
