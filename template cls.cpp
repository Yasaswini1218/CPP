#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T num1, num2;  

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResults() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition = " << add() << endl;
        cout << "Subtraction = " << subtract() << endl;
        cout << "Multiplication = " << multiply() << endl;
        cout << "Division = " << divide() << endl;
        
    }
    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
    
};

int main() {
    Calculator<int> intCalc(20, 10);
    cout << "Integer Calculator Results:\n";
    intCalc.displayResults();

  //  Calculator<float> floatCalc(5.5, 2.2);
  //  cout << "Float Calculator Results:\n";
  //  floatCalc.displayResults();
}

