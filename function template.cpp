#include <iostream> 
using namespace std; 
template <typename T> 
void mySwap(T &a, T &b) { 
T temp = a; a = b; b = temp; 
} 
int main() { 
int a = 5, b = 10; 
cout << "Before: " << a << " " << b << endl; 
mySwap(a, b); 
cout << "After: " << a << " " << b << endl; 
double x = 1.2, y = 3.4; 
mySwap(x, y); 
cout << "After swap double: " << x << " " << y << endl; 
return 0; 
} 
 
