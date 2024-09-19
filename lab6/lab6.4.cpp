#include <iostream>
using namespace std;
template <typename T>
class Calculator {
T num1;
	T num2;
public:
	
    Calculator(T a, T b) {
    	num1=a;
    	num2=b;
	} 
    T add() {
        return num1 + num2;
    }
 
    T subtract() {
        return num1 - num2;
    }
    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout<<"divion by 0 is not possible"<<endl;
        }
    }
};

int main() {
    
    cout << "For integers:" << endl;
    Calculator<int> intCalc(10, 5);
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    cout << "For floats:" << endl;
    Calculator<float> floatCalc(10.5, 2.5);
    cout << "Addition: " << floatCalc.add() << endl;
    cout << "Subtraction: " << floatCalc.subtract() << endl;
    cout << "Multiplication: " << floatCalc.multiply() << endl;
    cout << "Division: " << floatCalc.divide() << endl;

    return 0;
}

