#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int i,n,d,count=0;


cout<<"Enter a number";
cin>>n;


while(n>0)
{


   d=n%10;

   count++;

   n=n/10;


}


cout<<"The number of digits is "<<count;


}
