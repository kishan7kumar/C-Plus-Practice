#include<iostream.h>
#include<conio.h>
int main()
{
  int i=10;
  int *ptr = &i;
  char cptr[] = "string";
  cout<<"ptr ="<<ptr<<endl;
  cout<<"cptr ="<<cptr<<endl;
  cout<<"A is ="<<('A'+i-10)<<endl;            // type casting here A is 65
  cout<<"char A is ="<<char('A'+i-10)<<endl;
  cout<<"cptr adress ="<<(void*)cptr<<endl;      // here void* return the adress of cptr
  getch();
  return 0;

  }
