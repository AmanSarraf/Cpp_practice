#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<array>
using namespace std;

class complex
{
    private:
    int real,imaginary;
    public:
    void insert()
    {
        int r, i;
        cout<<"Enter real and imaginary part";
        cin>>r>>i;
        real=r;
        imaginary=i;
    }
    void view()
    {
        cout<<real<<"+"<<imaginary<<"i"<<"\n";
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }
    complex()
    {
        real=0,imaginary=0;
    }
    ~complex()
    {
        
    }

};

int main()

{
    array<complex,3>cmplx;
    array<complex,3>::iterator i;
    i=cmplx.begin();
    cout<<"Enter the real and imaginary part of complex nos.\n";
    for(i=cmplx.begin();i<cmplx.end();i++)
    {
     
       i->insert();
    }
    cout<<"NUMBERS ENTERED ARE:\n";
    for(i=cmplx.begin();i<cmplx.end();i++)
    {
        
        i->view();
    }

    cout<<"\nAnd the sum of all the Complex nos. is :";
    complex sum; /// to initialise this with zero we should use constructor
    for(i=cmplx.begin();i<cmplx.end();i++)
    {
        
        sum=sum+*i;
    }
    sum.view();

   getch();

}