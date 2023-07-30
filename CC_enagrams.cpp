#include<iostream>
#include<conio>
#include<string>

void main()
{   char str1[20];  // max length of string is 20
    char str2[20];
     int a,b,counter=0;
    cout<<"\nenter the string one: ";
    cin>>str1;
    cout<<"\nenter the string two: ";
    cin>>str2;
    a = strlen(str1);   // calculating length using string function
    b = strlen(str2);
    if(a==b)   // if length of both the string are equal then proceed
    {
      for(int i=0; i<=a ; i++)
      {
         char s = str1[i];    // a variable storing characters of string 1
         for(int j=0 ; j<=b ; j++)
         {
            if(s == str2[j])
             { counter++;

             }
          }
          if(counter==0)   // if the any character in string 1 is not found in string 2 then not enagrams
          { cout<<"\n\t\t\t\t\tNO they are not an anagrams";
            break;
          }

      } //  for loop closed

         if((counter-1)==a)
         {
          cout<<"\n\t\t\t\t\tYES they are an anagrams"<<endl<<counter<<endl<<a;
         }
     }

    else    // if length not equal then they are not enram
    {
       cout<<"\n\n\t\t\t\t\tThe length of two strings is not equal so they are not anagrams!!!";
    }
getch();
}



