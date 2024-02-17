#include<bits/stdc++.h>
using namespace std;


class Employee{
public:
    int employeeID;
    string name;
    double salary;

    Employee(int e, string n )
    {

        employeeID = e;
        name= n;


        cout << "Employee 1 created with no salary."<< endl;


    }
    Employee(int e, string n, double s)
    {

        employeeID = e;
        name= n;
        salary= s;

        cout << "Employee 2 created with  salary "<<salary<< ".Annual Salary:" << annualSalary()<< endl;
    }
        double annualSalary()
        {
            return salary*12;
        }

};


int main()
{

    Employee e1(001, "John");
    Employee e2(002, "Jane",5000);

    e1.salary=5000;
    return 0;
}
