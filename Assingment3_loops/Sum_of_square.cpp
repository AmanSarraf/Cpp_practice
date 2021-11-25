#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int i, n;
  int sum=0;

  cout<<"Enter a number";

  cin>>n;

 for(i=1;i<=n;i++){




       sum=sum+i*i;





  }



  cout<<"result is "<<sum;

  //this is without loop
  // cout<<"the sum of square of first "<<n<<" natural number is"<<(n*(n+1)*((2*n)+1))/6;


}
