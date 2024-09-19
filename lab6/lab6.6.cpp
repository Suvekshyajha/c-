#include <iostream>
#include <fstream>  // For file stream operations

using namespace std;

int main() {
    // Writing to the file
    {
        // Create an ofstream object to open and write to the file
        ofstream outFile("test_char.txt");

        // Check if the file was successfully opened
        if (!outFile) {
            cerr << "Error opening file !" << endl;
            return 1; // Return a non-zero value to indicate failure
        }

        // Write characters to the file using put()
        
        outFile.put('s');
        outFile.put('a');
        outFile.put('r');
        outFile.put('a');
        
        

        // Close the file
        outFile.close();
        cout << "Text has been written to test_char.txt successfully." << endl;
    }

    // Reading from the file
    {
        // Create an ifstream object to open and read from the file
        ifstream inFile("test_char.txt");

        // Check if the file was successfully opened
        if (!inFile) {
            cerr << "Error opening file for reading!" << endl;
            return 1; // Return a non-zero value to indicate failure
        }

        // Read characters from the file using get()
        char ch;
        cout << "Reading from file: ";
        while (inFile.get(ch)) { // Read each character until EOF
            cout << ch;
        }
        cout << endl;

        // Close the file
        inFile.close();
    }

    return 0; // Return 0 to indicate successful execution
}

