#include<iostream>
#include<string.h>
using namespace std;
class person
{
    private:
    char name[100];
    int age;
  protected:
    void setname(char *n)
    {
        strcpy(name,n);
    }
       
       void setage(int a)
       {
           age=a;
      
       }
public:
char* getname()
{
    return name;
}

int getage()
{
   return age;

}  
  
};

class employee:public person
{
    private:
    float salary;
    protected:
    void setsalary(float salary)
    {
        this->salary=salary;

    }
    public:
    float getsalary()       /// here there  is 3 public member 2 are from parent class

    {
        return salary;
    }

    void setEmployee(char *e, int a , float s)
    {
        setname(e);setage(a);salary=s;       // we can't write it as strcpy(name,n) and age =a coz name and age cannot be accessed here as it is private member of class person and private members is never accesed

    }
    

};

int main()
{
    employee e1;
    person p1;

    e1.setEmployee("aman",23,456900.85);
    cout<<e1.getname();
    cout<<"\n"<<e1.getage();
    cout<<"\n"<<e1.getsalary();

    





 
}

