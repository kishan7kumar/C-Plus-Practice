#include<iostream.h>
#include<conio.h>

class Customer
{
   char  mobile[13];
   char  name[26];
   char  dob[11];
   char  address[51];
   char  city[26];
   char  phone[14];
   double   amount;
   public:
   void  accept();
   void  display();
};

  void Customer::accept()
  {
       cout<<"\nenter the details here";
       cout<<"\nmobile: ";
       cin>>mobile;
        cout<<"\nname: ";
       cin>>name;
       cout<<"\ndate of birth: ";
       cin>>dob;
       cout<<"\naddress: ";
       cin>>address;
        cout<<"\ncity: ";
       cin>>city;
       cout<<"\nphone: ";
       cin>>phone;
       cout<<"\namount: ";
       cin>>amount;
   }

    void Customer::display()

   {     cout<<"\n Customer Details";
       cout<<"\nmobile: "<<mobile;

       cout<<"\nname: "<<name;

       cout<<"\ndate of birth: "<<dob;

       cout<<"\naddress: "<<address;

        cout<<"\ncity: "<<city;

       cout<<"\nphone: "<<phone;

       cout<<"\namount: "<<amount;

     }


   void main()
   {
       Customer c;
       c.accept();
       clrscr();
       c.display();
       getch();
  }




