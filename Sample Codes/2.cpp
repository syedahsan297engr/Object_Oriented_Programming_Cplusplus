#include <iostream>
using namespace std;
using std::string;

class abstract_employee{
    virtual void Ask_For_Promotion() = 0;
};


class Employee : abstract_employee{   //introducing abstract employee 
//we need to put members in this class now
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    //Encapsulation
    //setters and getters
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 18)  //introducing a checker here
            Age = age;
    }
    int getAge(){
        return Age;
    }

    void introduce_your_self() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    //lets made a constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
        introduce_your_self();
    }
    //Thats abstractor error solved by introducing the func. here
    void Ask_For_Promotion(){
        if (Age>30)
            cout << Name << " got promotion" << endl;
        else
            cout << Name << ", sorry NO promotion for you!" << endl;
    }
    virtual void work(){ //adding virtual means that in main where u are using pointer to 
    //link this main class to child class only child class work() will work
    //this virtual will check the work() in related classes and if this func present then implement that one
        cout << Name << " is conducting interviews "<< endl;
    }
};

class Data_Scientist : public Employee{ //Data_Scientist is sub-class child class of Employee class using public Employee will give access to the func promotions
public:
    string Fav_python_module;
    Data_Scientist(string name, string company, int age, string fav_python_module) // defining the new construct for this class
        :Employee(name, company ,age) //calling that construct
    {
        Fav_python_module = fav_python_module; 
    }

    void fix_bug(){
        cout << Name << " Fix Error using " << Fav_python_module << endl;
        //using Name instead of getname() will throw error but if u used Name as protected in
        //Employee Class then no error of this type
    }
    void work(){
        cout << Name << " is writing code using " << Fav_python_module << endl;
    }
};

class Teacher : public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    :Employee(name, company ,age)
    {
        Subject = subject;
    }
    void prep_lesson(){
        cout << Name << " is preparing " << Subject << " Lesson" << endl;
    }
    /*
    void work(){
        cout << Name << " is teaching " << Subject << endl;
    }
    */    
};

//private not accessible outside the class in c++ class is private by default
//public also out of the class
//protected is something in b/w public and private

int main()
{
    //Employee employee1 = Employee("Ahsan", "Data Science Institute", 19); //employee1 is object of class Employee we are using constructor here
    //Employee employee2 = Employee("Noori", "Data Science Institute", 35);
    //cout << endl;
    
    Data_Scientist employee3 = Data_Scientist("Syed M. Ahsan Noori", "Data Science Institute", 20, "Scikit");
    //employee3.fix_bug();
    //employee3.Ask_For_Promotion();
   // employee3.work();

    Employee *e = &employee3;    //polymorphism
    //cout << "Observe Difference" << endl;
    e->work();

    
    Teacher employee4 = Teacher("Ahsan", "UET LAHORE", 31, "Machine Learning");
    //employee4.prep_lesson();
    //employee4.Ask_For_Promotion();
    //employee4.work();
    Employee *e1 = &employee4;    //polymorphism
    //cout << "Observe Difference" << endl;
    e1->work();
    
    /*
    employee1.Name = "Ahsan";
    employee1.Company = "Ahsan Data Science Institute";
    employee1.Age = 19;
    */

    //employee1.introduce_your_self();
    //calling this func inside your constructor also do some betterment

    //if we need to enter data of 100 employees the above commented method is not good so
    //using a constructor will reduce the length of your code and made your code good looking

    /*
    employee1.setName("Syed Ahsan");
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    */
    /*
    employee1.Ask_For_Promotion();
    employee2.Ask_For_Promotion();
    */
}


/*
4-pillars of OOP
Encapsulation ----- idea of bundling together data  
preventing the outsider to access the data in our class directly

abstraction
Hiding complex things behind the procedure that will make them look simpler
like your mobile phone camera

inheritance
It is like u have all the features of class and then additional features also

polymorphism
The ability of method or object to have many forms
parent class object refer to the object of child class this sounds pretty different
*/