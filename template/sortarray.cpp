//Q. to Sort an array of any type
#include<iostream>
using namespace std;
template<typename x>

void sortarray(x *a,int n)        // BUBBLE SORT
{
    int temp;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
           
        }
    }

}
template<typename x>
void printarray(x *a,int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";

}
int main()
{
    char arr[]="NAMA";
    printarray(arr,4);
    sortarray(arr,4);
    printarray(arr,4);

}