#include<iostream>
using namespace std;
class dealer
{     
   private:    // all parts inside it cannot be acccessed by objects outside the class
   char name[20];
   char company[20];

   protected:  // cannot be accessed by objects outside class dealer but can be inherited
   int accept() // fucntion to accept details
   {
     cout<<"enter the name :";
     cin>>name;
     cout<<"enter the company name :";
     cin>>company;
     return 0;
   }

   public:  // all parts inside can be accessed by the objects outside the class
   int display()  // to display details
   { accept(); // accept function is called here so that it can be accessed by object
   
     cout<<"dealer name: "<<name;
     cout<<"dealer company: "<<company;
     return 0;
   }
   };
   int main()
   {
     dealer a;
     
     a.display();
    
      return 0;
   }
