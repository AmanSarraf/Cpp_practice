
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the last number till where you want to add";

    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<"the sum of"<<n<<" "<<"natural nos. is "<<sum;


      getch();
      return 0;
}
