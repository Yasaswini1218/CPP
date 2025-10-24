//5a)
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student() {
        cout << "Default Constructor called!" << endl;
        name = "Unknown";
        age = 0;
    }
    Student(string n, int a) {
        cout << "Parameterized Constructor called!" << endl;
        name = n;
        age = a;
    }

    Student(const Student &s) {
        cout << "Copy Constructor called!" << endl;
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating Student s1 using default constructor...\n";
    Student s1;
    s1.display();
    cout << "\nCreating Student s2 using parameterized constructor...\n";
    Student s2("Yasaswini", 21);
    s2.display();
    cout << "\nCreating Student s3 using copy constructor...\n";
    Student s3(s2);
    s3.display();
    cout << "\nEnd of main function...\n";
}

