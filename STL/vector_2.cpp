
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    //create a vector of int type and an iterator
    vector<int>v={};
    vector<int>::iterator it;
    // it=v.begin();   segmentation fault ho rhahaiu 
    // //store element 10 using pushback method in
    v.push_back(10);
    // //store 20 at the beggining of the vector using insert
   
    v.insert(v.begin(),20);
    // //store element 30 4 times just after the the first elemtof vector
    v.insert(v.begin()+1,4,30);
    int a=11,b=12,c=13;
    v.insert(v.begin()+2,{a,b,c});
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<""<<endl;
    
    // cout<<"hello";

 // copy last 5 element of v to v2
 vector<int>v2={};
 v2.insert(v2.begin(),v.rbegin(),v.rbegin()+5);
 for(int x:v2)
 cout<<x<<" ";
 // erase second element of v2
 v2.erase(v2.begin()+1);

 //print v2 elements
  for(int x:v2)
 cout<<x<<" ";
 // Erase 4th 5th 6th element of vector v
 v.erase(v.begin()+3,v.begin()+6); /// 4 th se le kr 6 th tk erase
 //print values of v1
 cout<<"\nThe values of V is now\n";
  for(int x:v)
 cout<<x<<" ";
    getch();
    return 0;
}