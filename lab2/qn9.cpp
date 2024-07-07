#include<iostream>
using namespace std;

class Velocity {
    float d;
    float t;
    float v;

public:
    Velocity() {
        d = 0;
        t = 0;
        v = 0;
    }

    void getinput() {
        cout << "Enter the distance and time: ";
        cin >> d >> t;
    }

    void display() const {
        cout << "Velocity: " << v << endl;
    }

    friend void calculate(Velocity &vel);
};

void calculate(Velocity &vel) {
    if (vel.t != 0) {
        vel.v = vel.d / vel.t;
    } else {
        cout << "Time cannot be zero." << endl;
        vel.v = 0;
    }
}

int main() {
    Velocity v;
    v.getinput();
    calculate(v);
    v.display();
    return 0;
}

