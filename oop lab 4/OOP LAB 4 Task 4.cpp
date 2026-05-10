#include <iostream>
using namespace std;

class Locker
{
public:
    Locker()
    {
        cout << "Locker allocated to customer." << endl;
    }
    ~Locker()
    {
        cout << "Locker returned by customer." << endl;
    }
};

int main()
{
    cout << "Creating locker inside block:" << endl;

    {
        Locker l1;
    }e

    cout << endl;
    cout << "Creating locker using new:" << endl;

    Locker* l2 = new Locker();
    delete l2;

    return 0;
}
