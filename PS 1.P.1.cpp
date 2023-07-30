#include<iostream.h>
#include<conio.h>
class Ticket
{   public:
    char name[20];
    char stat;

    void booking();
    void print();
    void status();
};

 void Ticket::booking()
{
      for(int i=0;i<2;i++)
      {cout<<"\nenter the name: ";
      cin>>name;
      cout<<"\nenter the status ( for confirmed press Y and for waiting press N):  ";
      cin>>stat;
      }
}

void Ticket::status()
{     if(stat=='Y')
        {   print();
         }
      else
      {
         cout<<"\n no confirmed passenger!!!";
      }
 }
 void Ticket::print()
{     for(int i=0; i<2;i++)
     {
      cout<<"\n\nname: ";
      cout<<name;
      cout<<"\nstatus: ";
      if(stat=='Y')
      {   cout<<"confirmed";
       }
       else
       {
          cout<<"waiting";
       }

}

   }
void main()
{
   Ticket c;
   c.booking();
   c.status();
   //c.print();
   getch();
}