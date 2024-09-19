#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string username;
    string address;

    cout << "Enter your username: ";
    getline(cin, username);

    cout << "Enter your address: ";
    getline(cin, address);

    {
        ofstream outFile("user_info.txt");

        if (!outFile) {
            cerr << "Error opening file for writing!" << endl;
            return 1;
        }

        outFile << "Username: " << username << endl;
        outFile << "Address: " << address << endl;

        outFile.close();
        cout << "Data has been written to user_info.txt successfully." << endl;
    }

    {
        ifstream inFile("user_info.txt");

        if (!inFile) {
            cerr << "Error opening file for reading!" << endl;
            return 1;
        }

        string line;
        cout << "\nContents of user_info.txt:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    }

    return 0;
}

