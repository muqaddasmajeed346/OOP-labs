#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    Rectangle(float side)
    {
        length = side;
        width = side;
    }
    float area()
    {
        return length * width;
    }

    // Display method
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area  : " << area() << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(5.0, 3.0);
    Rectangle r3(4.0);

    cout << "Rectangle 1 (Default Constructor)" << endl;
    r1.display();

    cout << "Rectangle 2 (Parameterized Constructor)" << endl;
    r2.display();

    cout << "Rectangle 3 (Single-Parameter Constructor)" << endl;
    r3.display();

    return 0;
}
