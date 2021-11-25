#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int n,i=2,flag;


    cout<<"enter a number";
    cin>>n;


    if(n==1){
        cout<<n<<" Neither prime nor composite";
    }

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            flag=1;

    }

    if(flag==1){

        cout<<n<<" is not prime";


    }

    else{

        cout<<n<<" is a prime no";
    }
    getch();
    return 0;
}
