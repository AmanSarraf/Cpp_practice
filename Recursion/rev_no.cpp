#include<iostream>
using namespace std;
void rev(int);
int main()
{

rev(10);
return 0;
}

void rev(int a)
{
 if(a==0)
 {
 return;
 }
 cout<<a<<"\n";
 rev(a-1);


}
