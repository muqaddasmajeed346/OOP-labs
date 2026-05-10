#include <iostream>
#define PI 3.14159

using namespace std;
class Shape
{
public:
    // Virtual function
    virtual double area()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return PI * radius * radius;
    }
};

int main()
{
    Shape* s1;
    Shape* s2;

    // Rectangle object
    Rectangle rect(5, 3);

    // Circle object
    Circle cir(4);

    // Access through base class pointer
    s1 = &rect;
    s2 = &cir;

    cout << "Area of Rectangle: " << s1->area() << endl;
    cout << "Area of Circle   : " << s2->area() << endl;

    return 0;
}
