#include <iostream> 
using namespace std;
class CSE_6 {
    int x;
public:
    CSE_6() : x(0) {
        cout << "Default constructor x = " << x << endl;
    }
    
    CSE_6(int v) : x(v) {
        cout << "Parameterized constructor x = " << x << endl;
    }
};
int main() {
    CSE_6 first;       
    CSE_6 second(10);  
}

