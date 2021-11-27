#include<iostream>
using namespace std;
void rev_odd(int);
int main()
{

rev_odd(10);
return 0;

}

void rev_odd(int a)
{
 if(a>0)
 {
     cout<<(a)+(a-1)<<"\n";   // this will print as the stack gets filled
  rev_odd(a-1);

  //cout<<a<<"\n";    this will start print when clearing the stack
 
 }
 else{
  
 
return;
 }

}