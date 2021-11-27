#include<iostream>
using namespace std;
void odd(int);
int main()
{
 
 odd(10);

}

void odd(int a)
{
  if(a>0)
  {
    odd(a-1);
    cout<<(a)+(a-1)<<"\n";

  }
  else
  {
      return;
  }


}