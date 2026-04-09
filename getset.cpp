#include<iostream>
using namespace std;
class user{
    private:
    int id;
    string password;
    public:
    string username;

    user(int id){
        this->id = id;
    }

    string getpassword(){
        return password;
    }
    void setpassword(string password){
        this->password = password;
    }
    int getid(){
        return id;
    }
};
int main(){
    class user u1(1);
    u1.username = "Ritik Ranjan";
    u1.setpassword("834327");
    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getpassword()<<endl;
    cout<<"ID: "<<u1.getid()<<endl;
}