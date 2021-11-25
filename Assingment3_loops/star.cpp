#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int i,j,k,l;

    cout<<"Enter the no. of lines "<<endl;
    cin>>l;

    for(i=1;i<=l;i++)

    {
        k=1;
        for(j=1;j<=l*2-1;j++)
        {
            if(j>=l+1-i&&j<=l-1+i&&k)
            {
                cout<<"*";
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;

            }

        }
    cout<<endl;


    }

    getch();
    return 0;

}
