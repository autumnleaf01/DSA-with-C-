#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
    complex(int i, int r){
        real = r;
        img = i;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator + (complex c2){
        int creal = real + c2.real;
        int cimg = img + c2.img;
        complex c3(cimg, creal);
        c3.display();

    }

};
int main(){
    complex c1(2,3);
    complex c2(4,5);
    c1.display();
    c2.display();
    complex c3 = c1 + c2;

}
