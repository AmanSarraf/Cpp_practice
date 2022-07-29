// Complete the program
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
  // create a forward list of int type
  forward_list<int> fl1;
  
  // store elemenet 10 in the list using push_front
  fl1.push_front(10);
  // store 20 before first element using emplace_front
  fl1.emplace_front(20);
  // store 30 after first element using emplace_after

  forward_list<int>::iterator it = fl1.begin();
  fl1.emplace_after(it, 30);

  fl1.insert_after(++it, 22);

  int length = 0;
  for (it = fl1.begin(); it != fl1.end(); it++)
  {
    length++;
  }
  cout << "Length=" << length<<endl;
  //print the list element using ranged for loop
for(int x:fl1){
  cout<<x<<" ";
}cout<<endl;
//Insert 35 as a last element 
int i=1;
for(it=fl1.begin();it!=fl1.end()&&i<length;it++,i++);
fl1.emplace_after(it,35);

for(it=fl1.begin();it!=fl1.end();it++)
{
  cout<<*it<<" ";
}cout<<endl;



for(int x:fl1){
  cout<<x<<" ";
}cout<<endl;

//Edit second last element to 75

for(length=0,it=fl1.begin();it!=fl1.end();it++,length++);
for(i=1,it=fl1.begin();it!=fl1.end()&&i<length;it++,i++);
*it=75;

//Print the first value using front method

cout<<fl1.front()<<endl;

//Erase first element using popfront

fl1.pop_front();

//Erase all element after first element using erase after

fl1.erase_after(fl1.begin(),fl1.end());

//Print List element using for loop

for(it=fl1.begin();it!=fl1.end();it++)
{
  cout<<*it<<" ";
}cout<<endl;

//Assign 6 elements 20,40,60,80,100,120 in the forward list object using fl1 
fl1={20,40,60,80,100,120};
for(it=fl1.begin();it!=fl1.end();it++)
{
  cout<<*it<<" ";
}cout<<endl;

//Erase secong element using erase aftere
fl1.erase_after(fl1.begin());

//Remove value 100 using remove method

fl1.remove(100);

//Print list using for loop

for(it=fl1.begin();it!=fl1.end();it++)
{
  cout<<*it<<" ";
}cout<<endl;

//Reverse list using reverse

fl1.reverse();

//Print the list 

for(it=fl1.begin();it!=fl1.end();it++)
{
  cout<<*it<<" ";
}cout<<endl;


}