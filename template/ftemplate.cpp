#include<iostream>
using namespace std;


// int big(int a,int b)
// {
//     if(a>b)
//     {
//         return a;          >>>>>>>>>>>>>this thing is cAUSING A BIT HURDLE
//     }
//     else{
//         return b;
//     }
// }
// float big(float a,float b)
// {
//     if(a>b)
//     {
//         return a;
//     }
//     else{
//         return b;
//     }
// }

template<typename x>
x big(x a,x b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
  
    cout<<big(7.5,4.2);
}