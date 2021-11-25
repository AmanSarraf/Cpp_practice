//program to find LCM of two numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,l;

    cout<<"Enter two numbers";
    cin>>a>>b;

    for(l=1;l<=a*b;l++)

    {
        if(l%a==0&&l%b==0)
            break;

    }

    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<l;

getch();
return 0;

}
