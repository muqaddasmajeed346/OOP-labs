#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    // Overloading == operator
    bool operator==(Distance d)
    {
        return (feet == d.feet && inches == d.inches);
    }

    // Display function
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    // Creating objects
    Distance d1(5, 8);
    Distance d2(5, 8);
    Distance d3(6, 2);

    cout << "Distance 1: ";
    d1.display();

    cout << "\nDistance 2: ";
    d2.display();

    cout << "\nDistance 3: ";
    d3.display();

    cout << "\n\nComparing d1 and d2: ";
    if (d1 == d2)
        cout << "Distances are equal.";
    else
        cout << "Distances are not equal.";

    cout << "\nComparing d1 and d3: ";
    if (d1 == d3)
        cout << "Distances are equal.";
    else
        cout << "Distances are not equal.";

    return 0;
}
