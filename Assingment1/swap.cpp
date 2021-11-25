#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b,temp;

    cout<<"enter two numbers";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;

    cout<<"the new value after swap is"<<a<<" "<<b;
    getch();

}
