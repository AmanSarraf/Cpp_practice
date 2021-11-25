

// program to write first n terms of a fibbonacci series

#include<iostream>
#include<conio.h>
using namespace std;

int main()
 {
     int i,fib=0, n;


     cout<<"Enter number of fibbonacii terms you want";
     cin>>n;


     for(i=0;i<=n;i++)
     {


         fib=fib+i;

         cout<<fib<<endl;



     }
     getch();
     return 0;

 }
