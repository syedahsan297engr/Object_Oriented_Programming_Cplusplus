#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);

private:
    double width;
};

// Member functions definitions
double Box::getWidth(void)
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}

// Main function for the program
int main()
{
    Box box;

    // set box length without member function
    box.length = 10.0; // OK: because length is public
    cout << "Length of box : " << box.length << endl;

    // set box width without member function
    // box.width = 10.0; // Error: because width is private
    box.setWidth(10.0); // Use member function to set it.
    cout << "Width of box : " << box.getWidth() << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

class Box
{
private:
    double width;
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

class SmallBox : Box
{ // SmallBox is the derived class. and u have a access of width if use private then this is not possible 
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// Member functions of child class
double Box::getSmallWidth(void)
{
    return width; //if u use private then u will not be able to return width as it will not be accessible rather u have to use function defined in private class
}

void Box::setSmallWidth(double wid)
{
    width = wid;
}

// Main function for the program
int main()
{
    SmallBox box;

    // set box width using member function
    box.setSmallWidth(5.0);
    cout << "Width of box : " << box.getSmallWidth() << endl;

    return 0;
}
*/