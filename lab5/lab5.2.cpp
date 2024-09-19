/*Create an abstract base class CentralBank with data members
interest rate for deposits(ird) and interest rate for loan (irl) which
data type are float. The class have getdata(), displaydata(), and
calculateInterestAmount() as pure virtual function.
From this class derive a new class NMB and GlobalBank to inherit all
feature and implement the base class.*/
#include<iostream>
using namespace std;

class CentralBank {
public:
    float irl;
    float ird;
    virtual void getdata() = 0;
    virtual void displaydata() = 0;
    virtual void calculateInterestAmount() = 0;
};

class NMB : public CentralBank {
public:
    void getdata() {
        cout << "Enter interest rate for loan (irl): ";
        cin >> irl;
        cout << "Enter interest rate for deposits (ird): ";
        cin >> ird;
    }
    
    void displaydata()  {
        cout << "Interest rate for deposit is " << ird << " and interest rate for loan is " << irl << endl;
    }

    void calculateInterestAmount()  {
        float principal;
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Interest amount for deposit: " << principal * ird << endl;
        cout << "Interest amount for loan: " << principal * irl << endl;
    }
};

class GlobalBank : public CentralBank {
public:
    void getdata()  {
        cout << "Enter interest rate for loan (irl): ";
        cin >> irl;
        cout << "Enter interest rate for deposits (ird): ";
        cin >> ird;
    }
    
    void displaydata()  {
        cout << "Interest rate for deposit is " << ird << " and interest rate for loan is " << irl << endl;
    }

    void calculateInterestAmount()  {
        float principal;
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Interest amount for deposit: " << principal * ird << endl;
        cout << "Interest amount for loan: " << principal * irl << endl;
    }
};

int main() {
    CentralBank* c1;
    CentralBank* c2;

    NMB n1;
    c1 = &n1;
    
    GlobalBank g1;
    c2 = &g1;
cout<<"for nmbbank"<<endl;
    c1->getdata();
    c1->displaydata();
    c1->calculateInterestAmount();
cout<<"for global bank"<<endl;
    c2->getdata();
    c2->displaydata();
    c2->calculateInterestAmount();

    return 0;
}

