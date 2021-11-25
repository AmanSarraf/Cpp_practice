
//To find the volume of the cuboid by using classes and objects
#include<iostream>
#include<conio.h>
using namespace std;

class cube{
int l,b,h;
public:
    void set(){

    cout<<"Enter the dimension :";
    cin>>l>>b>>h;

    }

    void get(){

    cout<<"The dimesion is "<<l<<" "<<b<<" "<<h<<endl;
    }


    void volume(){

    cout<<"The volume is :"<<l*b*h;

    }

};

int main(){
    cube c1;
    c1.set();
    c1.get();
    c1.volume();
    getch();
    return 0;



}
