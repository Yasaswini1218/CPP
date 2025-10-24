#include <iostream>
using namespace std;
class Complex {
    int r, i;
public:
    Complex(int x=0,int y=0){r=x;i=y;}
    Complex operator+(Complex c){return Complex(r+c.r, i+c.i);}
    void display(){cout<<r<<" + "<<i<<"i";}
};
int main(){
    Complex c1(2,3),c2(1,4);
    Complex c3=c1+c2;
    c3.display();
}

