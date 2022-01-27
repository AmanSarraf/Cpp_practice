#include<iostream>
#include<stdio.h>

using namespace std;
template<typename x,typename y>
class pairs
{
    private:
    x data1;
    y data2;
    public:
    void first(x data1)
    {
        this->data1=data1;
    }
    void second(y data2)
    {
        this->data2=data2;
    }
    void viewall()
    {
        cout<<data1<<endl<<data2;
    }
    void viewfirst()
    {
        cout<<data1;
    }
    void viewsecond()
    {
        cout<<data2;
    }


};
int main()
{
    pairs<int,string> p1;
    p1.first(10);
    p1.second("Aman");
    p1.viewall();
    p1.viewsecond();

}

