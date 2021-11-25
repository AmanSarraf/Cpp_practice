#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int i,n,d,sum=0;


cout<<"Enter a number";
cin>>n;


while(n>0)
{


   d=n%10;

   sum=sum+d;

   n=n/10;


}


cout<<"The sum of digits is "<<sum;


}

