#include <iostream>
using namespace std;

class Printer {
public:
    void print_document() {
        cout << "Printing Document ready..." << endl;
    }
};

class Scanner {
public:
    void scan_document() {
        cout << "Scanning document ready" << endl;
    }
};

class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        cout << "Photocopy process started now" << endl;
        scan_document();
        print_document();
        cout << "Photocopy is completed" << endl;
    }
};

int main() {
    Photocopier p;

    p.print_document();
    p.scan_document();
    p.photocopy();

    return 0;
}
