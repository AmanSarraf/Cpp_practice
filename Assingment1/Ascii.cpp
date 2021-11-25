// to take charecter as input and print the corresponding Ascii code
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    char ch;
    cout<<"enter a charecter\n";
    cin>>ch;
    cout<<"the Ascii code for"<<ch<<"is : "<<(int)ch;   //type casting is done here since we can't use format specifiers

}
