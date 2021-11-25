#include<iostream>
#include<conio.h>
using namespace std;
int check(int);

int main()
{
   int x,y;
   cout<<"Enter a number";
   cin>>x;
   y=check(x);
   if(y==1)
    cout<<x<<" is even";
   else
    cout<<x<<" is Odd";

   getch();
   return 0;

}
 int check(int a){
 if(a%2==0)
    return 1;
 else
    return 0;

 }
