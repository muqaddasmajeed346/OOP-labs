#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    // Constructor to initialize length
    Box(int l)
    {
        length = l;
    }

    // Friend function declaration
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b)
{
    cout << "Length of Box = " << b.length << endl;
}

int main()
{
    Box box1(15);

    // Calling friend function like a normal function
    displayLength(box1);

    return 0;
}
