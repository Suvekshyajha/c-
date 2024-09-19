#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string name;
    double balance;
public:
    Account(string n, double b = 0) : name(n), balance(b) {}
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (balance >= amount) balance -= amount;
        else cout << "Insufficient funds\n";
    }
    void display() { cout << name << ": $" << balance << endl; }
};

class SavingAccount : public Account {
    double rate;
public:
    SavingAccount(string n, double r) : Account(n), rate(r) {}
    void applyInterest() { balance += balance * rate; }
};

class CurrentAccount : public Account {
    double limit;
public:
    CurrentAccount(string n, double l) : Account(n), limit(l) {}
    void withdraw(double amount) {
        if (balance + limit >= amount) balance -= amount;
        else cout << "Exceeds overdraft limit\n";
    }
};

int main() {
    SavingAccount sa("John", 0.05);
    CurrentAccount ca("Jane", 1000);
    
    sa.deposit(1000);
    sa.withdraw(200);
    sa.applyInterest();
    sa.display();

    ca.deposit(500);
    ca.withdraw(1000);
    ca.display();

    return 0;
}
