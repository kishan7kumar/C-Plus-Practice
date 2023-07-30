#include<iostream.h>
#include<conio.h>
int main()
{   clrscr();
  //int i=10;
  //int *ptr = &i;
  char cptr[20] ;
  cout<<"enter the string: "<<endl;;    //<<ptr<<endl;
  cin.getline(cptr,20,'n');
  cout<<cptr;       //cout<<"A is ="<<('A'+i-10)<<endl;            // type casting here A is 65
           //cout<<"char A is ="<<char('A'+i-10)<<endl;
            //out<<"cptr adress ="<<(void*)cptr<<endl;      // here void* return the adress of cptr
  getch();
  return 0;

  }
