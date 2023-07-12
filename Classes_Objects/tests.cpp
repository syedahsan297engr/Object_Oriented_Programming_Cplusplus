#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);
    double width_pub;

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
    cout << box.width_pub << endl; //if i write box.width i get error also on protected width_pub i get error
    return 0;
}