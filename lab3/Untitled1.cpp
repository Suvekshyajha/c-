#include <iostream>
#include <string>

using namespace std;

class Join {
private:
    string str;

public:
    void input() {
        cout << "Enter a string: ";
        cin >> str;
    }

    Join operator+(const Join& j) {
        Join res;
        res.str = this->str + j.str;
        return res;
    }

    void print() const {
        cout << "The concatenated string is: " << str << endl;
    }
};

int main() {
    Join j1, j2, j3;

    // Input the strings
    j1.input();
    j2.input();

    // Concatenate the strings using the overloaded + operator
    j3 = j1 + j2;

    // Print the result
    j3.print();

    return 0;
}

