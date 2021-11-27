#include<iostream>
using namespace std;
int sum_even(int);
int main()
{

 cout<<"the sum is"<<sum_even(5);



}

int sum_even(int a)
{
if(a==0)
 {
     
     return 0;

 }
 else
 return ((2*a)+sum_even(a-1));
 

 
 
    
}