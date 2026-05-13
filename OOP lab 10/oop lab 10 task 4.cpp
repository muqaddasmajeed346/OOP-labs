#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Step 1: Write student details to file
    ofstream writeFile("students.txt");

    writeFile << "Hamza 111\n";
    writeFile << "sarmad 100\n";
    writeFile << "saba 101\n";

    writeFile.close();

    // Step 2: Read and display student details
    ifstream readFile("students.txt");

    string name;
    int rollNo;

    cout << "Student Details:\n";

   string line;

while (getline(readFile, line)) {
    cout << line << endl;
}

    readFile.close();

    return 0;
}
