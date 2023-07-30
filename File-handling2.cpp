#include<conio.h>
#include<fstream.h>
int main()
{    clrscr();
     ifstream in("FILE1.TXT");            // program for reading character from file
     char str[30];
     int i=0;
     while(in.get(str[i++]));
     cout<<str;
     getch();
     return 0;
}
