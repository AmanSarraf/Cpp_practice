#include<iostream>
using namespace std;
int sum(int);
int main()
{
int s;
//sum(5);
cout<<"sum is "<<sum(5);

}
int sum(int a)
{

    if(a==0)
    {
        

        return 0;

    }
    
  return ((a*a)+sum(a-1));
}
