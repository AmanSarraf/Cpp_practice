#include<iostream>
using namespace std;
class complex{
    private:
    int real,imaginary;
    public:
    complex(){
        real=0;
        imaginary=0;
    }
    complex(int r,int i){
        real=r;
        imaginary=i;
        
    }
    
    
    complex operator +(complex c)
    {
        complex t;
        t.imaginary=this->imaginary+c.imaginary;
        t.real=this->real+c.real;
        
        return t;
    }
    bool operator ==(complex c){
        if(this->real==c.real&&this->imaginary==c.imaginary){
            return true;
        }
        return false;
    }
    complex operator *(complex c)
    {
        complex t;
        t.imaginary=(this->imaginary*c.real)+(this->real*c.imaginary);
        t.real=(this->real*c.real)-(this->imaginary*c.imaginary);
        
        return t;
    }
    complex operator -(complex c)
    {
        complex t;
        t.imaginary=this->imaginary-c.imaginary;
        t.real=this->real-c.real;
        
        return t;
    }
    
    
    
};


int main(){
    complex c1(1,2),c2(3,4),c3;
    c3=c1+c2;
    
    
}