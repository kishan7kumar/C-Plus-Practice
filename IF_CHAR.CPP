#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  char input;
  cout<<"enter the alphabet: ";
  cin>>input;
  if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
  {  cout<<"\nvowel";
  }
  else
  {  clrscr();
  cout<<"\nnot vowel";
  }
  getch();
}
