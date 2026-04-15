#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    string subject;

    string salary(){
        cout << "SALARY: 50000" << endl;
    }
};
class student : public Teacher{
    public:
    string name;
    string subject;

};
class employee : public Teacher {
    public:
    string name;
    string subject;
};
int main(){
    student s1;
    s1.name = "Ritik Ranjan";
    s1.subject = "DSA";
    cout<<s1.salary()<<endl;
}