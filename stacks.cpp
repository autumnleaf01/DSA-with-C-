#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class Stack {
    private:
        vector<int> arr;

    public:

        void push(int x){
            arr.push_back(x);
        }
        void pop(){
            if(arr.empty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                arr.pop_back();
            }
        }
        void top(){
            if(arr.empty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<arr.back()<<endl;
                cout<<arr[arr.size()-1]<<endl;
            }
        }
        void empty(){
            if(arr.empty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
        }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.pop();
    s.empty();
}