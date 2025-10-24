#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Sum of two integers: " << add(10, 20) << endl;
    cout << "Sum of three integers: " << add(5, 10, 15) << endl;
    cout << "Sum of two floats: " << add(2.5f, 3.7f) << endl;
}

