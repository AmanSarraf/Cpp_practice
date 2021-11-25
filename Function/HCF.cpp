// write a function to calculate the HCF of two numbers##
#include<iostream>
#include<conio.h>
int hcf(int,int);
using namespace std;
int main(){

    int a,b,h;
    cout<<"Enter the two number to get there HCF";
    cin>>a>>b;
    h=hcf(a,b);

    cout<<"HCF is "<<h;
    getch();
    return 0;



}
int hcf(int x,int y)
{
    int hcf;
    for(hcf=x<y?x:y;hcf>=1;hcf--)
    {
        if(x%hcf==0&&y%hcf==0)
            return hcf;
        else
            continue;
    }


}
