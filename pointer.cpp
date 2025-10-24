#include <iostream>
using namespace std;

class Sample {
    int a, b;
public:
    void setValues(int a, int b) {
        this->a = a;
        this->b = b;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Sample s;
    s.setValues(10, 20);
    s.display();
    return 0;
}

