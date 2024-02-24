class Circle
{
private:
double radius;

public:
Circle (double radius);         //*parameter constructor 
Circle ();                      //*default constructor
Circle (const Circle& circle);  //*copy constructor
};

// Definition of a parameter constructor
Circle :: Circle (double rds)
: radius (rds) // Initialization list
{
// Any other statements
}
// Definition of a default constructor
Circle :: Circle ()
: radius (1.0) // Initialization list. If it is missing, radius is set to garbage values
{
// Any other statements
}
// Definition of a copy constructor
Circle :: Circle (const Circle& cr)
: radius (cr.radius) // Initialization list
{
// Any other statements
}