/***************************************************************
* A program to use a class in object-oriented programming *
***************************************************************/
#include <iostream>
using namespace std;
#include<cassert>
/***************************************************************
* Class Definition: *
* declaration of parameter constructor, default constructor, *
* copy constructor, destructor, and other member functions *
***************************************************************/
class Circle
{
private:
    double radius;                 //data member
    static int count;           //static data member
public:
    Circle (double); // Parameter Constructor
    Circle (); // Default Constructor
    ~Circle (); // Destructor
    Circle (const Circle& circle); // Copy Constructor
    void setRadius (double radius); // Mutator
    double getRadius () const; // Accessor const
    double getArea () const; // Accessor
    double getPerimeter () const; // Accessor
    static int getCount();
};
/***************************************************************
* Member Function Definition: *
* Definition of parameter constructor, default constructor, *
* copy constructor, destructor, and other member functions *
***************************************************************/
//definition of static data member
int Circle::count=0;

// Definition of parameter constructor
Circle :: Circle (double rds)
: radius (rds)
{   
    count++;
    if (radius <= 0.0)
{
    cout << "No circle can be made!" << endl;
    cout << "The program is aborted" << endl;
    assert (false);
}
cout << "The parameter constructor was called. " << endl;
}
// Definition of default constructor
Circle :: Circle ()
: radius (0.0)
{   
    count++;
cout << "The default constructor was called. " << endl;
}
// Definition of copy constructor
Circle :: Circle (const Circle& circle)
: radius (circle.radius)
{   
    count++;
cout << "The copy constructor was called. " << endl;
}
// Definition of destructor
Circle :: ~Circle ()
{   
    count--;
cout << "The destructor was called " ;
cout << endl;
}
// Definition of setRadius member function
void Circle :: setRadius (double value)
{
radius = value;
}
// Definition of getRadius member function
double Circle :: getRadius () const
{
return radius;
}
// Definition of getArea member function
double Circle :: getArea () const
{
const double PI = 3.14;
return (PI * radius * radius);
}
// Definition of getPerimeter member function
double Circle :: getPerimeter () const
{
const double PI = 3.14;
return (2 * PI * radius);
}

int Circle::getCount(){
    return count;
}
/***************************************************************
* Application : *
* Creating three objects of class Circle (circle1, circle2, *
* and circle3) and applying some operation on each object *
***************************************************************/
int main ( )
{
// Instantiation of circle1 and applying operations on it
Circle circle1 (4.4);
cout << "Radius: " << circle1.getRadius() << endl;
cout << "Area: " << circle1.getArea() << endl;
cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

// Instantiation of circle2 and applying operations on it
Circle circle2 (circle1);
cout << "Radius: " << circle2.getRadius() << endl;
cout << "Area: " << circle2.getArea() << endl;
cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;
// Instantiation of circle3 and applying operations on it

Circle circle3;
cout << "Radius: " << circle3.getRadius() << endl;
cout << "Area: " << circle3.getArea() << endl;
cout << "Perimeter: " << circle3.getPerimeter() << endl << endl;

cout << "\nCount of objects: " << circle3.getCount() << endl;   //added a nested block in the main function
//to create a scope in which the objects are created. This means that outside this block, there is no instance,
//but we can check the value of the static data member using the class name.

// Calls to destructors occur here
return 0;
}