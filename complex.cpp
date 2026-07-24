//Operator overloading in C++
#include <iostream>
using namespace std;
class Complex {
    int real;
    int img;
public:
    Complex(int r, int i){
        real = r;
        img = i;
    }
    void show(){
        cout << real << "+"<< img << "i" << endl;
    }

    Complex operator + (Complex &c2){
        int resreal = this->real + c2.real;
        int resimg  = this->img + c2.img;
        cout <<"Result of addition is:";
        return Complex(resreal, resimg);
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    c1.show();
    c2.show();
    Complex c3 = c1 + c2;
    c3.show();
}
