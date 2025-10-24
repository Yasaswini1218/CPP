//2a)
#include <iostream> 
using namespace std; 
int value = 100; // global variable 
namespace University { 
int value = 200; 
void show() { 
        std::cout << "University::value = " << value << std::endl;
 } 
} 
class department { 
public: 
int value; 
department() : value(300) {} 
void display() { 
cout << "department::value = " << value << endl; 
cout << "global value = " << ::value << endl; 
University::show(); 
} 
}; 
int main() { 
department Obj1; 
Obj1.display(); 
return 0; 
} 
