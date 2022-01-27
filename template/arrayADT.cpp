#include<iostream>
#include<stdio.h> //for USING NULL
using namespace std;
template<typename x>
class array
{
   private:
   int lastindex;
   int capacity;
   x *ptr;
   public:
   array()
   {
       lastindex=-1;
       capacity=0;
       ptr=NULL;
   }
   void createarray(int size)
   {
      capacity=size;
      lastindex=-1;
      ptr=new x[size]; 
   }
   void append(x data)
   {
     if(lastindex==capacity-1)
     {
         cout<<"OVERFLOW";
     }
     ++lastindex;
     ptr[lastindex]=data;
   }
   void insert(int index,x data)
   {
        if(index<0||index>capacity-1)
       {
             cout<<"INVALID INDEX";
       }
       else
       {
           for(int i=lastindex;i>=index;i--)
           {
               ptr[i+1]=ptr[i];
           }
           ptr[index]=data;
           lastindex++;

       }
   }
   void delet(int index)
   {

    if(index<0||index>capacity-1)
       {
             cout<<"INVALID INDEX";
       }
       else
       {
           for(int i=index;i<=lastindex;i++)
           {
               ptr[i]=ptr[i+1];
           }
           lastindex--;
       }

   }
   int search(x data)
   {
       for(int i=0;i<=lastindex;i++)
       {
           if(ptr[i]==data)
           return i;
           return -1;
       }
   }
   x getdata(int index)
   {
       if(index<0||index>capacity-1)
       {
           return NULL;
       }
       else
       {
          return ptr[index];
       }
   }
   int count()
   {
       for(int i=0;i<=lastindex;i++)
       {
           return i;
       }
   }
   void edit(int index, x newdata)
   {
       if(index<0||index>capacity-1)
       {
           cout<<"Invalid index";
       }
       else
       {
           ptr[index]=newdata;

       }
   }
   void view()
   {
       for(int i=0;i<=lastindex;i++)
       {
           cout<<ptr[i]<<endl;
       }
   }
   ~array()
   {
       delete ptr;
   } 
};
int main()
{
    array<int> a1;
    a1.createarray(5);
    a1.append(1);
    a1.append(7);
    a1.append(2);
    a1.append(6);
    a1.append(3);
    a1.insert(2,10);
    a1.view();
    array<string> a2;
    a2.createarray(4);
    a2.append("komal");
    a2.append("aman");
    a2.append("Sanjana");
    a2.append("voltage");
    a2.view();  

}

