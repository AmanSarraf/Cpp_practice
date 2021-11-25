
#include<iostream>
#include<conio.h>
using namespace std;

int prime(int);

int main(){
int x,y;
cout<<"Enter a number";
cin>>x;
y=prime(x);
if(y==1)
    cout<<"Prime";
else
    cout<<"Not prime";

getch();
return 0;



}

int prime(int n)
{
    int i;
    for(i=2; i<n ;i++)
        if(n%i==0)
        break;
    if(i==n)          // if this runs means all loop executed and no such condition met to break the loop
                      // indicates the natural exit of loop (end of loop's life cycle)
    return 1;
    else
        return 0;

}
