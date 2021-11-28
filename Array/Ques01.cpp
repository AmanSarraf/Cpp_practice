/*Define a class Array, which contain and int array of size 10
as instance member variable. now define the folowing 
a. InputArrayElements()
b.findMaxElement()
c.findMinElement()
d.sort()
e.editElement(int index,int new Data)
f.sumOfElements()
g.averageOfElemnts()
*/
#include<iostream>
using namespace std;
class Array
{
 int arr[10];
 public:
 void InputArrayElement()
 {
   int i;
   cout<<"Enter Array Elements";
   for(i=0;i<10;i++)
   {
       cin>>arr[i];
   }   
 }
 void ShowArray()
 {
     int i;
   for(i=0;i<10;i++)
   {
       cout<<"\n"<<arr[i];
   } 
 }
int findMaxElement();
int findMinElement();
void sort();
void editElement(int index,int Data);
int sumOfElements();
int averageOfElemnts();

};

int Array::findMaxElement()
{
    int m=arr[0],i;
    for(i=0;i<10;i++)
    {
        if(arr[i]>m)
        m=arr[i];
        else
        continue;
    }
    return m;
}
int Array::findMinElement()
{
    int s=arr[0],i;
    for(i=0;i<10;i++)
    {
        if(arr[i]<s)
        s=arr[i];
        else
        continue;
    }
    return s;
}
void Array::sort()
{
int i,j,temp;
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }


} 
}

void Array::editElement(int index,int Data)
{
    if(index>10)
     cout<<"Invalid Index";
     else
    arr[index]=Data;

}
int Array::sumOfElements()
{

int i,sum=0;
for(i=0;i<10;i++)
{
    sum=sum+arr[i];
}
 return sum;
}
int Array::averageOfElemnts()
{
    int Avg;
  cout<<"Average Of Element is\n";
  
Avg=Array::sumOfElements()/10;
return Avg;
}



int main()
{
  Array a;
  a.InputArrayElement();
  a.ShowArray();
  cout<<"Max of array is \n "<<a.findMaxElement();
  cout<<"Min of array is \n"<<a.findMinElement();
  a.sort();
  a.ShowArray();
  a.editElement(1,99);
  a.ShowArray();
  cout<<"Average is "<<a.averageOfElemnts();

  return 0;


}