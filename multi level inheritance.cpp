#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;

public:
    void setStudentInfo(int r) {
        rollNumber = r;
    }
    void displayStudentInfo() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Exam : public Student {
private:
    float marks;

public:
    void setExamInfo(float m) {
        marks = m;
    }
    void displayExamInfo() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam e1;

    e1.setPersonInfo("Alice", 20);  
    e1.setStudentInfo(101);         
    e1.setExamInfo(95.5);          
    cout << "----- Student Exam Details -----" << endl;
    e1.displayPersonInfo();
    e1.displayStudentInfo();
    e1.displayExamInfo();

    return 0;
}

