#include <iostream>

using namespace std;
class Line
{
public:
   void setLength(double len);
   double getLength(void);
   Line(double len); // This is the constructor

private:
   double length;
};

// Member functions definitions including constructor
Line::Line(double len)
{
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
void Line::setLength(double len)
{
   length = len;
}
double Line::getLength(void)
{
   return length;
}

// Main function for the program
int main()
{
   Line line(10.0);

   // get initially set length.
   cout << "Length of line : " << line.getLength() << endl;

   // set line length again
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() << endl;

   return 0;
}

/*
Line::Line( double len): length(len) {
   cout << "Object is being created, length = " << len << endl;
}

Above syntax is equal to the following syntax −

Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
If for a class C, you have multiple fields X, Y, Z, etc., to be initialized, then use can use same syntax and separate the fields by comma as follows −

C::C( double a, double b, double c): X(a), Y(b), Z(c) {
   ....
}

*/