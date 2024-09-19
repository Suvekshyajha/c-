#include <iostream>
#include <fstream>  // For file stream operations

using namespace std;

int main() {
    // Create an ofstream object to open and write to the file
    ofstream outFile("test.txt");

    // Check if the file was successfully opened
    if (!outFile) {
        cerr << "Error opening file !" << endl;
        return 1; // Return a non-zero value to indicate failure
    }

    // Write some text to the file
    outFile << "Hello, this is a test file." << endl;
    
    // Close the file
    outFile.close();

    cout << "Text has been written to test.txt successfully." << endl;

    return 0; // Return 0 to indicate successful execution
}

