//I'm going to write a code for Complex Number 
//I just don't know what to do
//So, am starting with creating two integers a real and an imaginary part 
#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
    
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    void print(){
        if(img>0){
            cout<<real<<"+"<<"i"<<img;
        }
        if(img<0){
            cout<<real<<"-"<<"i"<<img;
        }
    }
    Complex operator +(Complex &x){
        int resreal = this->real + x.real;
        int resimg = this->img + x.img;
        return Complex(resreal, resimg);
    }
    Complex operator - (Complex &x){
        int resreal = this->real - x.real;
        int resimg = this->img - x.img;
        return Complex(resreal, resimg);
    }
    Complex operator * (Complex &x){
        int resreal = this->real * x.real;
        int resimg = this->img * x.img;
        return Complex(resreal, resimg);
    }
    Complex operator / (Complex &x){
        int resreal = this->real / x.real;
        int resimg = this->img / x.img;
        return Complex(resreal, resimg);
    }
};
int main(){
    Complex c(2,4);
    Complex c2(3,4);
    Complex c3 = c2 + c;
    c3.print();
    Complex c4 = c3 +c2;
    c4.print();
}