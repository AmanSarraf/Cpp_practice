#include<iostream>
#include<list>
using namespace std;
int main()
{
    //Create a list of int value
    list<int>l1;
    list<int>::iterator it;
    it=l1.begin();
    // store element 10 using push_back method
    //Store element 20 using push_front method
    l1.push_back(10);
    l1.push_front(20);
    //store 30 after first element using insert
   // l1.insert(it+1,30); error coz random access is not allowed
   it++; // now it is l1.begin()+1
   l1.insert(it,30);

// store 22 44 33 after second element
it++;
l1.insert(it,{22,44,33});
// print list element 
for(it=l1.begin();it!=l1.end();it++)
{
    cout<<*it<<" ";

}


} 