// lest digit in a number
// program to find highest digit in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,rem,lest=9;
    cout<<"enter a number :";
    cin>>num;

    while(num>0){

        rem=num%10;
        if(rem<lest)
        {
            lest=rem;

        }
        num=num/10;

    }
     cout<<"The lest digit "<<"is "<<lest;
        getch();
        //return 0;

}

