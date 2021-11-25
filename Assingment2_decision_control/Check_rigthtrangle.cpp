#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int l,b,h;

    cout<<"enter the value of l , b , h";
    cin>>l>>b>>h;

    if((h*h)==(l*l)+(b*b))
    {

        cout<<"triangle is right angled";

    }
    else
    {
        cout<<"Triangle is not right angled";
    }
    getch();
    return 0;

}
