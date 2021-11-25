// reverse of a number
// program to print binary of a given decimal number;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem;

    cout<<"Enter a decimal number";
    cin>>n;

    while(n>0)
    {

          rem=n%10;
          cout<<rem;
        n=n/10;



    }






}

