//program to prime no. between two numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int f,l,n,i;

  cout<<"Enter two numbers";
  cin>>f>>l;


  for(n=f+1;n<=l-1;n++){

    for(i=2;i<n;i++)              // will check for all till n-1
        if(n%i==0)
        break;                    //if
    if(i==n)
    {
        cout<<n<<" ";

    }


  }
  getch();
  return 0;




}
