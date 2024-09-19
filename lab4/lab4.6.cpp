#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    int patientID;
    string name;

public:
    void setpDetails(int id, string pname) {
        patientID = id;
        name = pname;
    }

    void display() {
        cout << "Patient ID: " << patientID << endl;
        cout << "Patient Name: " << name << endl;
    }
};

class Ward : public Patient {
protected:
    string wardType;
    int bedNumber;

public:
    void setwDetails(string wtype, int bnum) {
        wardType = wtype;
        bedNumber = bnum;
    }

    void displayward() {
        cout << "Ward Type: " << wardType << endl;
        cout << "Bed Number: " << bedNumber << endl;
    }
};

class Payment : public Ward {
protected:
    int billNumber;
    double totalAmount;

public:
    void setsDetails(int bnum, double amount) {
        billNumber = bnum;
        totalAmount = amount;
    }

    void displaypay() {
        Patient::display();
        Ward::displayward();
        cout << "Bill Number: " << billNumber << endl;
        cout << "Total Amount: $" << totalAmount << endl;
    }
};

int main() {
    Payment patient1;
    patient1.setpDetails(101,"John Doe");
    patient1.setwDetails("General", 25);
    patient1.setsDetails(5001, 3500.75);
    patient1.display();
    patient1.displayward();
    patient1.displaypay();
    return 0;
}

