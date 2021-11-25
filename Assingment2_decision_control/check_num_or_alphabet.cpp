#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char c;

    cout<<"enter anyrhing";
    cin>>c;

    if(c>='A'&& c<='Z')
    {
        cout<<c<<" "<<"is an uppercase";

    }

     else if(c>='a'&& c<='z')
    {
        cout<<c<<" "<<"is an lowercase";

    }
    else if(c>='0'&& c<='9')
    {
        cout<<c<<" "<<"is a digit";

    }
    else{
        cout<<c<<" "<<"is a special charecter";
    }

}

