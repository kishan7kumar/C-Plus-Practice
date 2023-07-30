#include<iostream.h>
#include<conio.h>
void main()
{
  int marks;
  clrscr();
  cout<<"\nEnter the marks: ";
  cin>>marks;
  clrscr();
  if (marks>100)
  {  cout<<"\nInvalid Marks!!!!";
  }
  else if(marks>=80)
  {   cout<<"\nGrade is A";
  }
  else if(marks>=50)
  {   cout<<"\nGrade is B";
  }
  else if(marks>=40)
  { cout<<"\nGrade is C";
  }
  else
  { cout<<"\nFail";
  }
  getch();
}