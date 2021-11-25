// program to find highest digit in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,rem,large=0;
    cout<<"enter a number :";
    cin>>num;

    while(num>0){

        rem=num%10;
        if(rem>large)
        {
            large=rem;

        }
        num=num/10;

    }
     cout<<"The greatest digit "<<"is "<<large;
        getch();
        //return 0;

}
