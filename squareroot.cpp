#include<iostream>
using namespace std;
double squareroot(double num){
    double x = 1;
    while (x*x <=num){
        x++;
    }
    return x - 1;
}
int main(){
    double num, squareRoot;
    cout << "Enter a number:";
    cin >> num;
    squareRoot = squareroot(num);
    cout << "The square root of " << num << " is " << squareRoot << endl;
}