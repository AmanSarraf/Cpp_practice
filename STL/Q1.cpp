#include<iostream>
#include<array>
using namespace std;
// using array library
int main()
{
   
    array<int,10> arr;
    array<int,10>::iterator i;
    cout<<"Enter element of array";
    for(i=arr.begin();i<arr.end();i++)
    {
        cin>>*i;

    }
    cout<<"\nThe odd elements of array are :";
     for(i=arr.begin();i<arr.end();i++)
    {
         if(*i%2!=0)
        cout<<*i<<endl;
        else
        continue;

    }
    cout<<"\nThe even elements of array are :";
     for(i=arr.begin();i<arr.end();i++)
    {
         if(*i%2==0)
        cout<<*i<<endl;
        else
        continue;

    }
    // array<int,10>::reverse_iterator r; // to access from reverse order
    // cout<<"\nElements in reverse order are with +2:\n";
    // for(r=arr.rbegin();r<arr.rend();r++)
    // {
    //     *r=*r+2; ////////we can perform modificationt to the actual values as well
    //     cout<<*r<<endl;
    // }

    /////------------IF we dont want the iterator to make changes then we should use Constant iterators<<<<<<<<<<<<------------
// array<int,10>::const_iterator c;

// cout<<"\nElements using reverse iterators are\n";
// for(c=arr.cbegin();c<arr.cend();c++)
// {
//     // *c=*c-2;   this modification is not possible 
//     cout<<""<<*c<<"\n"; 
// }


    
    
    // for(int i:arr)
    // {                       -------->>>>>>>>Also does the job
    //     cout<<i;
    // }

}