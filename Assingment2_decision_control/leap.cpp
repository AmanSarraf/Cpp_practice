#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;

    cout<<"Enter a year ";
    cin>>a;
    if(a%4==0){
        cout<<a<<" "<<"is a leap year";
    }
    else{

        cout<<a<<" "<<"is non leap year";
    }

    return 0;


}

