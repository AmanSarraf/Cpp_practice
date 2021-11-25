
//function to print N terms of Fibbonacci series

#include <iostream>
void fibb(int);

using namespace std;

int main()
{
    cout<<"Hello World";

    int n;
    cout<<"Enter Number of terms of Fibbonacci";
    cin>>n;
    fibb(n);

    return 0;
}
void fibb(int x)
{
    int a=-1,b=1,c,i;

  for(i=0;i<x;i++)
  {
      c=a+b;
      cout<<c<<endl;
      a=b;
      b=c;


  }


}
