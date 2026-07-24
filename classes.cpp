#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    public:
    void setData(int newRollno, string newName){
        rollno = newRollno;
        name = newName;
    }
    void getData(){
        {
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name << endl;
        }
    }
};
int main(){
    Student s1;
    s1.setData(101, "Ritik Ranjan");
    s1.getData();
}
//THis is code to understand the working of classes and objects in c++