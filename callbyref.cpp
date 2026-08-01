#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

int main(){
    int a = 5;
    int b = 7;
    cout<<"The value of a and b after swapping : "<<"a = "<<a<<"b = "<<b<<endl;
    swap(&a, &b);
    cout<<"The value of a and b after swapping : "<<"a = "<<a<<"b = "<<b<<endl;
}