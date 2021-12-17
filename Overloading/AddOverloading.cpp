#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
   void showdata()
   {

       cout<<a<<"+"<<b<<"i"<<"\n";
   }
   complex(int a, int b)
   {
       this->a=a;
       this->b=b;

   }
   complex(){}

  complex operator+(complex alpha)  /// Overloading + operator 
  {
     complex temp;
     temp.a=a+alpha.a;
     temp.b=b+alpha.b;

     return temp;

  }


};
int main()
{
 complex c1(1,2),c2(3,4),c3;
 c1.showdata();
c2.showdata();
c3=c1+c2;
c3.showdata();
return 0;

}