
//Create a vector of int type put 4 number in it and print square of them using range for loop
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator i;

    int n=4,num;
    while(n>0){
        cin>>num;
        v.push_back(num);
        n--;
    }
    for(int x:v){
        cout<<(x*x)<<" ";
    }

}
