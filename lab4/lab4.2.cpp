#include <iostream>
using namespace std;

class Lecturer {
protected:
    string name;
    int id;

public:
    Lecturer(string n, int i) : name(n), id(i) {}

    void displayInfo() {
        cout << "Lecturer Name: " << name << endl;
        cout << "Lecturer ID: " << id << endl;
    }
};

class PartTimeFaculty : public Lecturer {
private:
    double payPerHour;

public:
    PartTimeFaculty(string n, int i, double pay) : Lecturer(n, i), payPerHour(pay) {}

    void displayInfo() {
        Lecturer::displayInfo();
        cout << "Part-time Faculty Pay per Hour: $" << payPerHour << endl;
    }
};

class FullTimeFaculty : public Lecturer {
private:
    double salary;

public:
    FullTimeFaculty(string n, int i, double sal) : Lecturer(n, i), salary(sal) {}

    void displayInfo() {
        Lecturer::displayInfo();
        cout << "Full-time Faculty Salary: $" << salary << endl;
    }
};

int main() {
    PartTimeFaculty ptf("John Doe", 101, 40.50);
    FullTimeFaculty ftf("Jane Smith", 102, 60000);

    cout << "Part-Time Faculty Details: " << endl;
    ptf.displayInfo();

    cout << "\nFull-Time Faculty Details: " << endl;
    ftf.displayInfo();

    return 0;
}

