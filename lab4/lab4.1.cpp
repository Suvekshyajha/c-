#include <iostream>
using namespace std;

class Polygon {
protected:
    int width;
    int height;

public:
    void input() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    void display() const {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

class Rectangle : public Polygon {
public:
    void area() const {
        cout << "Area of rectangle is: " << (width * height) << endl;
    }
};

class Triangle : public Polygon {
public:
    void area() const {
        cout << "Area of triangle is: " << (0.5 * width * height) << endl;
    }
};

int main() {
    Rectangle r1;
    cout << "Rectangle:" << endl;
    r1.input();
    r1.display();
    r1.area();

    Triangle t1;
    cout << "Triangle:" << endl;
    t1.input();
    t1.display();
    t1.area();

    return 0;
}

