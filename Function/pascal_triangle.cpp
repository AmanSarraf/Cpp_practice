// program to prtit the pascal triangel
#include<iostream>
#include<conio.h>

int fact(int);
int comb(int ,int);
void pascal(int);
using namespace std;
int main()
{

int l;
cout<<"Enter the number of ines you want to print"<<endl;
cin>>l;
pascal(l);

}
int fact(int n)
{
    int fact=1;
    if(n==0)
        return 1;
    while(n>1)

    {
        fact=fact*n;

        n--;
    }
    return fact;

}

int comb(int n, int r)
{
    if(n==r)
    {
        return 1;
    }
    else{

        return fact(n)/(fact(n-r)*fact(r));
}
}

void pascal(int l)
{
int i,j,k,r;


    for(i=1;i<=l;i++)

    {
        k=1;
        r=0;
        while(r<=i-1){
        for(j=1;j<=l*2-1;j++)
        {
            if(j>=l+1-i&&j<=l-1+i&&k)
            {
                cout<<comb(i-1,r);
                k=0;
                r++;
            }
            else
            {
                cout<<" ";
                k=1;

            }

        }
        }
    cout<<endl;


    }


}
