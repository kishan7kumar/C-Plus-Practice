#include<iostream.h>
#include<conio.h>
void main()
{

  char string[]="string to search";
  char test[]="ing";

  char str1[20]="Don";
  char str2[20]="C language";
  int mlength;
  int mreturn;

  if(strstr(string,test))
  {
    cout<<"string found";
    strcpy(str1,str2);          // replaces string 1 content with string 2
    cout<<endl<<"content of str1 is: "<<str1;
    strcpy(str1,"C language");
    cout<<endl<<"final content of str1 is: "<<str1;
    mlength=strlen(str1);      // gives the length of string 1
    cout<<endl<<"the endl of str1 is: "<<mlength;
    mreturn=strcmp(str1,str2);
    if(mreturn==1)
    {
       cout<<endl<<"the string match: ";
    }

    else
    {
       cout<<endl<<"the string do not match";
    }
  }

  getch();
 }
