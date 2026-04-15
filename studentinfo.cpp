#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string n, int a){
        name = n;
        age = a;
    }

};
class student : public person{
    public:
    int studentid;
    student(string n, int a, int id) : person(n, a){
        studentid = id;
    }
    void studentinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentid<<endl;
    }

};
int main(){
    student s1("Ritik", 20, 42324);
    s1.studentinfo();
}