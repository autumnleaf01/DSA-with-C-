//Today we're going to write a code to understand the concept of copy constructor
#include<iostream>
using namespace std;
 
class Circle{
    private:
        int radius;
        float PI;
        float area;

    public:

        Circle(int radius, float PI){
            this->radius = radius;
            this->PI = PI;
        }
        Circle(Circle& c){
            radius = c.radius;
            PI = c.PI;
        }
        void printData(){
            cout<<"The value of PI is: "<<PI<<endl;
            cout<<"The value of radius is: "<<radius<<endl;
        }
};

int main(){
    Circle c(5,3.14);
    c.printData();
    Circle c2 = c;
    Circle c3(c);
    c2.printData();
    c3.printData();

}
