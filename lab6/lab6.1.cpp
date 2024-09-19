#include<iostream>
using namespace std;

// Template function for swapping values
template <typename T>
void swapValues(T &num1, T &num2) {
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 10, b = 20;
    float x = 1.1, y = 2.2;
    char c1 = 'A', c2 = 'B';

    // Testing the swap function with different types
    cout << "Before swapping (int): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping  a = " << a << ", b = " << b << endl;
cout<<"for float"<<endl;
    cout << "\nBefore swapping  x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping  x = " << x << ", y = " << y << endl;

    cout << "\nBefore swapping (char): c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping : c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

