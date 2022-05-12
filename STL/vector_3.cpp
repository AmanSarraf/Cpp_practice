#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vec;  // vector for containing int vector
    vector<int>v1={10,11,12},v2{20,21},v3{30,31,32,33,34};
    vec.push_back(v1);
    vec.insert(vec.end(),{v2,v3});
    vector<vector<int>>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        for(auto x:*it)
        cout<<x<<" ";
        cout<<endl;
    }
    
    


    
} 