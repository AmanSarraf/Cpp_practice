#include<iostream>
#include<conio.h>
using namespace std;
void print1(int);
void print2(int);
void print3(int);
void print4(int);


int main()
{

    print1(1);

    getch();
   return 0;
}
void print1(int a)
{
     cout<<a<<"\n";
    print2(2);
}
void print2(int a)
{
    cout<<a<<"\n";
    print3(3);
}
void print3(int a)
{
    cout<<a<<"\n";
    print4(4);
}
void print4(int a)
{
    cout<<a<<"\n";

}
