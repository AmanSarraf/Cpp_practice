#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>::iterator it;
    cout<<"Enter the number of elements :";
    int n,h;
    cin>>n;
    it=v1.begin();
    for (int i = 0; i < n; i++)
    {
        cin>>h;
        v1.push_back(h);
        
        
    }
    for (it=v1.begin(); it< v1.end(); it++)
    {
        cout<<(*it)*(*it)<<endl;
        
        
    }
    


    
    

    

}