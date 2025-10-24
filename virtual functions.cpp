#include <iostream>
using namespace std;
class Shape {
public:
    virtual void displayArea(){
        cout << "This is a generic shape." << endl;
    } 
};

class Circle : public Shape {
public:
    void displayArea() override {
        cout << "Area of Circle = p * r * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void displayArea() override {
        cout << "Area of Rectangle = length * breadth" << endl;
    }
};

int main() {
    Shape* shapePtr; 

    Circle c;
    Rectangle r;
    shapePtr = &c;
    shapePtr->displayArea();   

    shapePtr = &r;
    shapePtr->displayArea();   
   
}

