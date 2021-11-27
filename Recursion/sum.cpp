#include<iostream>
using namespace std;
int sum(int);
int main()
{
int s;
s=sum(5);
cout<<"sum is "<<s;

}
int sum(int a)
{

    if(a==0)
    {
        

        return 0;

    }
    
  return (a+sum(a-1));
}
