#include <iostream>
#include <fstream>
#include <cstring>  // For strlen and strcpy

using namespace std;

class Student {
public:
    char stdname[100];
    int mark;

    void writeToFile(const char* filename) {
        ofstream outFile(filename, ios::binary);
        if (!outFile) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        // Write the name and mark to the file
        outFile.write(stdname, sizeof(stdname));
        outFile.write(reinterpret_cast<char*>(&mark), sizeof(mark));

        outFile.close();
    }

    void readFromFile(const char* filename) {
        ifstream inFile(filename, ios::binary);
        if (!inFile) {
            cerr << "Error opening file for reading!" << endl;
            return;
        }

        // Read the name and mark from the file
        inFile.read(stdname, sizeof(stdname));
        inFile.read(reinterpret_cast<char*>(&mark), sizeof(mark));

        inFile.close();
    }
};

int main() {
    Student student1;
    strcpy(student1.stdname, "John Doe");  // Set student name
    student1.mark = 85;                    // Set student mark

    student1.writeToFile("studentfile.txt");  // Write to file

    Student student2;
    student2.readFromFile("studentfile.txt"); // Read from file

    cout << "Student Name: " << student2.stdname << endl;
    cout << "Student Mark: " << student2.mark << endl;

    return 0;
}

