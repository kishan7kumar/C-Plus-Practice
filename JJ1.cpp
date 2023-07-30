#include<iostream.h>
#include<conio.h>
 class CountItself
 {
    public:
    static int objectcount=1;
    int localcount;



  void setcount()
      {

         localcount=objectcount++;
      }

  void displaycount()
      {

            cout<<"total number of object: "<<localcount;
      }

 };



     int main()
     {  CountItself count1, count2,count3;
        count1.setcount();
        count2.setcount();
        count3.setcount();
        count3.displaycount();
        getch();
        return 0;
     }



