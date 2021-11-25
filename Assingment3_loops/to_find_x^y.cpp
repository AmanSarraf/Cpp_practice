// program  to find x power y

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int i,p=1,x,y;
    cout<<"Enter a number";
    cin>>x;
    cout<<"Enter the exponent";
    cin>>y;

    for(i=1;i<=y;i++)
    {
        p=p*x;     //when doing x=x*x it dont work
     }
    cout<<"X power Y is"<<p;


}
