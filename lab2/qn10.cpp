/*Write a program according to the following specification:
? Make a class FriendclassA and FriendclassB
? Int a and int b are private member of FriendclassA
? Initialize value of “a” through constructor
? Take data from user for “b” through “getdata” function
? Make friend relation to do all mathematical operation on FriendclassB by accessing the
private datamember of FriendclassA and display result.Write a program according to the following specification:
? Make a class FriendclassA and FriendclassB
? Int a and int b are private member of FriendclassA
? Initialize value of “a” through constructor
? Take data from user for “b” through “getdata” function
? Make friend relation to do all mathematical operation on FriendclassB by accessing the
private datamember of FriendclassA and display result.*/
#include <iostream>

class FriendclassB; // Forward declaration

class FriendclassA {
private:
    int a;
    int b;

public:
    FriendclassA(int value) : a(value), b(0) {}

    void getdata() {
        std::cout << "Enter value for b: ";
        std::cin >> b;
    }

    friend class FriendclassB; // Declare FriendclassB as a friend class
};

class FriendclassB {
public:
    void add(FriendclassA &obj) {
        std::cout << "Addition: " << obj.a + obj.b << std::endl;
    }

    void subtract(FriendclassA &obj) {
        std::cout << "Subtraction: " << obj.a - obj.b << std::endl;
    }

    void multiply(FriendclassA &obj) {
        std::cout << "Multiplication: " << obj.a * obj.b << std::endl;
    }

    void divide(FriendclassA &obj) {
        if (obj.b != 0) {
            std::cout << "Division: " << static_cast<double>(obj.a) / obj.b << std::endl;
        } else {
            std::cout << "Division by zero error" << std::endl;
        }
    }
};

int main() {
    FriendclassA a_instance(10);
    a_instance.getdata();

    FriendclassB b_instance;
    b_instance.add(a_instance);
    b_instance.subtract(a_instance);
    b_instance.multiply(a_instance);
    b_instance.divide(a_instance);

    return 0;
}

