#include<iostream>
using namespace std;

void natural(int);

int main()
{

    
   natural(5);


}
void natural(int n)
{

    if(n>=1)
    {
        natural(n-1);
        cout<<n<<endl;
    }
    else
    return;

    
   
}