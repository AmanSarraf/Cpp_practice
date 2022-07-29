//Example to implement Priority Queue for non-primitive datatype
#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
class Employee{
    private:
    int Emp_id;
    string name;
    float salary;
    public:
    float getSalary(){return salary;}
    void setEmployee(int id, string n,float s){Emp_id=id;name=n;salary=s;}
    void showEmployee(){
        cout<<"\n"<<"ID = "<<Emp_id<<"\n"<<"Name = "<<name<<"\n"<<"Salary = "<<salary;
    }
};

//To implement a parameter to decide the priority we take salary 
//we take struct as its members are by default public , we could take class as well
struct CompareSalary
{
    bool operator ()(Employee &e1,Employee &e2){
      
      return e1.getSalary() < e2.getSalary(); // return true if correct
    }                                              // we are overloading () operator
};


int main()
{
    priority_queue<Employee,vector<Employee>,CompareSalary> p1;
    Employee emp[5],e;
    emp[0].setEmployee(1,"Anil",8000);
    emp[1].setEmployee(2,"Ankit",6000);
    emp[2].setEmployee(3,"subhash",21000);
    emp[3].setEmployee(4,"Binod",5000);
    emp[4].setEmployee(5,"subodh",3000);

    for(int i=0;i<5;i++){
        p1.push(emp[i]);
    }

    p1.pop();
    e=p1.top();
    e.showEmployee();



}