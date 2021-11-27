#include<iostream>
using namespace std;
int factorial(int);
int main()
{

 cout<<"the factorial is"<<factorial(5);



}

int factorial(int a)
{
if(a==0)
 {
     
     return 1;

 }
 else
 return (a*factorial(a-1));
 

 
 
    
}