#include<iostream.h>
#include<conio.h>
enum color
{
    red=1,
    blue,
    green,
};

void main()
{

    clrscr();
    color c;
    c=red;
    cout<<"\nthe color is:"<<c;
    c=blue;
    cout<<"\nthe color is:"<<c;
    c=green;
    cout<<"\nthe color is:"<<c;
    getch();
}

