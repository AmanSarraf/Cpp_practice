#include<iostream>
using namespace std;
int sum_odd(int);
int main()
{

 cout<<"the sum is"<<sum_odd(5);



}

int sum_odd(int a)
{
if(a==0)
 {
     
     return 0;

 }
 else
 return ((2*a)-1+sum_odd(a-1));
 

 
 
    
}