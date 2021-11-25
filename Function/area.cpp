#include<iostream>
#include<conio.h>
using namespace std;
#define pi 3.14
float circle(int);

int main()
{
   int r;

   cout<<"Enter the radius of circus";
   cin>>r;
   cout<<"The area is :"<<circle(r);
   getch();
   return 0;

}
float circle (int x){
 return (pi*(x*x));

}
