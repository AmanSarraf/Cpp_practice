//Define a class time to represent time (like 3hr 45min 20sec ). Declare appropriate number
//of instance member variable and also define instance member functions to set values for time and display Values of time
#include<iostream>
#include<conio.h>
using namespace std;
class time{
 int hr, min, sec;
 public:
     void set(){
     cout<<"Enter hr. min. sec"<<endl;
     cin>>hr>>min>>sec;

     }
     void get(){

     cout<<"The time is ::"<<hr<<":"<<min<<":"<<sec<<endl;
     }


};

int main(){

time t1;
t1.set();
t1.get();
getch();
return 0;


}
