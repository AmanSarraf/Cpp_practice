// program to print binary of a given decimal number;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem,arr[20],i=0;

    cout<<"Enter a decimal number";
    cin>>n;

    while(n>0)
    {

          rem=n%2;

        n=n/2;
        arr[i]=rem;

      i++;

    }
for(int j=i-1;j>=0;j--)
{
    cout<<" "<<arr[j];

}






}
