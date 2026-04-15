#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    float balance;
    public:
    BankAccount(int accNum, float bal){
        accountNumber = accNum;
        balance = bal;
    }
    void display(){
        cout<<"AccountNumber: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;  
    }
    void deposit(float amount){
        balance += amount;
    }
    void withdraw(float amount){
        balance -= amount;
        cout<<"Amount withdrawn: "<<amount<<endl;
    }
    void getbalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};

int main(){
class BankAccount acc1(2113, 5000);
acc1.display();
acc1.deposit(2000);
acc1.getbalance();
acc1.withdraw(1500);    
acc1.getbalance();
return 0;
}