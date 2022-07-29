// Complete the code
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // create a list of int values
    list<int> l1;

    // store 10 using push_back
    l1.push_back(10);
    // store 20 using push_front
    l1.push_front(20);
    // store 30 after first element using insert
    //  l1.insert(l1.begin()+1,30);   Random Access is not allowed so use  an iterator
    list<int>::iterator i = l1.begin();
    i++; // i=i+1 now point to second position

    l1.insert(i, 30);

    // insert 22,33,44 after second element
    l1.insert(i, {22, 33, 44});
    // print elemetn using using range for loop
    for (int x : l1)
    {
        cout << x << " ";
    }
cout<<endl;
    // Edit seconf last element to 25
    i = l1.end();
    i--;
    i--;
    *i = 25;

    // Print list using for loop
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // Print first value of list using front method
    cout << l1.front();

    // Erase front element using pop front
    l1.pop_front();
    // Erase last element using pop back
    l1.pop_back();

    cout<<endl;
    // Print list using for loop
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    i=l1.begin();
    i++;
list<int>::iterator i2=l1.end();
i2--;
    l1.erase(i,i2);
    cout<<endl;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }


}