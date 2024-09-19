#include <iostream>
using namespace std;

class Overload {
private:
    int num;

public:
    // Constructor to initialize num
    Overload(int n = 0) : num(n) {}

    // Friend function declaration
    friend Overload operator-(Overload &o);

    // Function to display the value of num
    void display() const {
        cout << "The value is: " << num << endl;
    }
};

// Friend function definition to overload the unary minus operator
Overload operator-(Overload &o) {
    Overload res;
    res.num = -o.num;
    return res;
}

int main() {
    Overload obj1(10);

    // Display the original value
    obj1.display();

    // Apply the unary minus operator
    Overload obj2 = -obj1;

    // Display the result
    obj2.display();

    return 0;
}

