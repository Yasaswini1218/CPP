//5b)
#include <iostream>
using namespace std;
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
    void swapValues() {
        T1 temp = first;
        first = second; 
        second = temp;
    }
};

int main() {
    Pair<int, float> p1(10, 5.5);
    cout << "Pair 1: ";
    p1.display();

    Pair<string, int> p2("Yasaswini", 21);
    cout << "Pair 2: ";
    p2.display();

    Pair<char, double> p3('A', 3.14);
    cout << "Pair 3: ";
    p3.display();
}

