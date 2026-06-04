#include <iostream>
using namespace std;

// Function Template
template <typename T>
T findMin(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    // Integer values
    cout << "Minimum of 10 and 20: "
         << findMin(10, 20) << endl;

    // Double values
    cout << "Minimum of 5.6 and 3.2: "
         << findMin(5.6, 3.2) << endl;

    // Character values
    cout << "Minimum of 'A' and 'Z': "
         << findMin('A', 'Z') << endl;

    return 0;
}
