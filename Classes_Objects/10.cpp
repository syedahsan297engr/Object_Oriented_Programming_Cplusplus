#include <iostream>
 
using namespace std;

class Box {
   public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;

         // Increase every time object is created
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      static int getCount() {
         return objectCount;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}

/*
Static Data Members:

When the static keyword is used with a data member inside a class, it declares a static data member.
A static data member is shared among all instances (objects) of the class. It means that all objects of the class have access to the same static data member, and modifying it in one object will affect its value in all other objects.
Static data members are declared inside the class definition but need to be defined outside the class using the class name and scope resolution operator ::.
They are often used to store class-level information or shared data that needs to be accessed by all objects of the class.
Static Member Functions:

When the static keyword is used with a member function inside a class, it declares a static member function.
Static member functions are not associated with any particular object of the class. They can be called using the class name and the scope resolution operator ::, without needing to create an instance of the class.
Static member functions can only access static data members and call other static member functions of the class. They cannot access non-static data members or call non-static member functions directly.
They are often used for utility functions or operations that are not specific to any particular object but are related to the class as a whole.
Static Local Variables:

When the static keyword is used with a local variable inside a function, it declares a static local variable.
Static local variables are initialized only once when the function is first called, and their values are preserved across multiple function calls.
They have a "static" lifetime, meaning they exist throughout the entire program execution.
Static local variables are useful when you want to retain the value of a variable between function calls, while ensuring it is not accessible outside the function.
*/