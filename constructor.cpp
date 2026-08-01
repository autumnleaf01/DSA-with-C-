#include<iostream>
using namespace std;

class Student{
    private:
        int i;
        float f;
    public:
        /*Student(int i, float f){
            this->i = i;
            this->f = f;
        }*/
        void setData(int x, float y){
            i = x;
            f = y;
        }

        void printData(){
            cout<<"The roll no of student is : "<<i<<endl;
            cout<<"Marks of student is: "<<f<<endl;
        }



};

int main(){
    Student s;
    s.setData(32,434.4);
    s.printData();
}