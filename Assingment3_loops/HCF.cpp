// program to find HCF of two numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,h;
    cout<<"Enter two numbers";
    cin>>a>>b;

    for(h=a>b?a:b ;h>=1; h--)    ////can write a<b as well
    {
        if(a%h==0&&b%h==0)
        {
            break;

        }

    }
    cout<<"The Hcf is "<<h;
    getch();
    return 0;

}
