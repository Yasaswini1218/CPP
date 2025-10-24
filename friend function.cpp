#include <iostream> 
using namespace std; 
class Kamesh { 
private: 
int secret; 
public: 
Kamesh(int s = 10) : secret(s) {} 
friend void reveal(const Kamesh &k); 
}; 
void reveal(const Kamesh &k) { 
cout << "Secret value is: " << k.secret << endl; 
} 
int main() { 
Kamesh first(42); 
reveal(first); 
return 0; 
} 

