#include<iostream>
using namespace std;
void even(int);
int main()
{
 
 even(10);

}

void even(int a)
{
  if(a>0)
  {
    even(a-1);
    cout<<(2*a)<<"\n";

  }
  else
  {
      return;
  }


}