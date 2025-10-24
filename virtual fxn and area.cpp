#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float x, float y) { l = x; b = y; }
    void area() { cout << "Area of Rectangle = " << l * b << endl; }
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }
    void area() { cout << "Area of Circle = " << 3.14 * r * r << endl; }
};

int main() {
    Rectangle r(5, 3);
    Circle c(4);
    r.area();
    c.area();
}

