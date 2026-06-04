#include <iostream>
#include <string>
using namespace std;

// Function Template
template <typename T>
void printTwice(T val)
{
    cout << val << endl;
    cout << val << endl;
}

int main()
{
    // Call with int
    printTwice(10);

    // Call with double
    printTwice(3.14);

    // Call with string
    printTwice("Hello");

    return 0;
}
