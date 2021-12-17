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
  bool operator ==(complex c)
  {
      
      if(a==c.a&&b==c.b)
      return 1;
      else
      return 0;

  }


};
int main()
{
 complex c1(1,2),c2(3,4),c3;
 c1.showdata();
c2.showdata();
c3=c1+c2;
c3.showdata();
if(c1==c2)
{cout<<"Both are same";}
else
{
    cout<<"Different";
}
return 0;

}