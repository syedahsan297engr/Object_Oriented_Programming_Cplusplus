#include <iostream>
using namespace std;
using std::string;

class Employee{
//we need to put members in this class now
public:
    string Name;
    string Company;
    int Age;

    void introduce_your_self()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    //lets made a constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
        introduce_your_self();
    }
};

//private not accessible outside the class in c++ class is private by default
//public also out of the class
//protected is something in b/w public and private

int main()
{
    Employee employee1 = Employee("Ahsan", "Ahsan Institute", 19); //employee1 is object of class Employee
    /*employee1.Name = "Ahsan";
    employee1.Company = "Ahsan Data Science Institute";
    employee1.Age = 19;*/

    //employee1.introduce_your_self();
    //calling this func inside your constructor also do some betterment

    //if we need to enter data of 100 employees the above commented method is not good so
    //using a constructor will reduce the length of your code and made your code good looking
}


/*
4-pillars of OOP
Encapsulation ----- idea of bundling together data  
preventing the outsider to access the data in our class directly

abstraction

inheritance

polymorphism
*/