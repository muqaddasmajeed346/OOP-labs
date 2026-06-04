#include <iostream>
using namespace std;

#include "Voter.h"

int main() {
    Voter v;

    v.setData();

    if (v.isEligible()) {
        cout << "\nEligible to vote." << endl;
    } else {
        cout << "\nNot eligible to vote." << endl;
    }

    return 0;
}
