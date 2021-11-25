
// program for next prime number

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int n;
cout<<"Enter a number";
cin>>n;

int i,j;
for(i=n+1;;i++)
{
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            break;
        if(j==i)
        break;

    }
    cout<<i;

}return 0;
getch();

}

