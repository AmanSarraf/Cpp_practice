//Q. to print the value of array of any type
#include<iostream>
using namespace std;
template<typename x>
void printarray(x *a,int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i];

}

int main()
{
    char a[]="AMAN";
    printarray(a,3);

}