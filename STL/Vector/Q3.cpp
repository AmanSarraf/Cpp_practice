//More on vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create a vector vec for containing int vectors
    vector<vector<int>> vec;
    //create and initialise 3 vectors
    vector<int> v1={1,2,3,4};
    vector<int> v2={10,20,30,40};
    vector<int> v3={11,21,31,41};
    vec.push_back(v1);
    //store v2,v3 at end of vector ec using insert
    vec.insert(vec.end(),{v2,v3});
    vector<vector<int>>::iterator i;
    for(i=vec.begin();i!=vec.end();i++){
        for(auto x:*i)   // or (int x:*i)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

}
