#include <iostream>
using namespace std;

class Box
{
protected:
    double width;
};

class SmallBox : Box
{ // SmallBox is the derived class. and u have a access of width if use private then this is not possible 
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// Member functions of child class
double SmallBox::getSmallWidth(void)
{
    return width; //if u use private then u will not be able to return width as it will not be accessible rather u have to use function defined in private
}

void SmallBox::setSmallWidth(double wid)
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