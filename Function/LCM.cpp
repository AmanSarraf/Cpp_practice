// Function to get the lcm of two numbers
#include<iostream>
#include<conio.h>
int lcm(int,int);
using namespace std;
int main(){

    int a,b,L;
    cout<<"Enter two number whose LCM is to be created: ";
    cin>>a>>b;
    L=lcm(a,b);

    cout<<"The Lcm is  "<<L;



getch();
return 0;
}
int lcm(int x, int y)
{
    int l;
    for(l=1;l<=x*y;l++)      //LCM IS a number which is divided by a and b
                             //HCF is a number which divides a and b
    {
        if(l%x==0&&l%y==0)
            return l;
        else
            continue;
    }


}

