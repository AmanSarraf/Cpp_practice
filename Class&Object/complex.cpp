
//Define a class complex to represent a complex number.declare instance member variable
//to store real and imaginary part of a complex number,also define instance member function to
//set values of complex number and print values of complex number.
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
int real;
int img;
public:
    void set(){
    cout<<"Enter the real and imaginary part";
    cin>>real>>img;
    }
    void get(){
    cout<<"The Complex Number is "<<real<<"+"<<img<<"i"<<endl;

    }

};



int main()
{
    complex c1,c2;
    c1.set();
    c1.get();
    c2.set();
    c2.get();
    getch();
    return 0;


}

