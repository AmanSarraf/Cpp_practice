//Complete  the code 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //create a vector for int type and an iterator
    vector<int> v1;
    vector<int>::iterator i;
    //store 10 using push_back in v1;
    v1.push_back(10);
    //store 20 in the beggining of v1 using insert
    v1.insert(v1.begin(),20);
    //store element 30 ,4 times just after first element
    v1.insert(v1.begin()+1,4,30);
    //create 3 variables with the value 11,12 13 and store them at 3rd position in the vector using insert

    int a=11,b=12,c=13;
    v1.insert(v1.begin()+2,{a,b,c});
    //print value of vector v1
    for (i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    } 
    cout<<endl;
    //create another vector v2 for type int 
    vector<int> v2;
    //copy last 5 element of v1 into v2 (last element of v1 should be first element of v2)

    v2.insert(v2.begin(),v1.rbegin(),v1.rbegin()+5);
    for(int x:v2){
        cout<<x<<" ";
    }
    v2.erase(v2.begin()+1);
    cout<<endl;
    for(int x:v2){
        cout<<x<<" ";
    }
    cout<<endl;

    //erase 4th , 5th,6th element of v1;

    v1.erase(v1.begin()+3,v1.begin()+6);


    for(int x:v1)
    {
        cout<<x<<" ";
    }






}