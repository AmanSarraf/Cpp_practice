// program to print first N fibbonacci series
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=-1,b=1,i,c,n;


    cout<<"Enter a No. of fibbonacci terms your want";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;

    }

    getch();

    return 0;







}
