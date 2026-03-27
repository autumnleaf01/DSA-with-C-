#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int original = num;
    int rev = 0, temp = 0;
    while(num > 0){
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    return rev == original;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<num<<" is a palindrome number."<<endl;
    }
    else{
        cout<<num<<" is not a palindrome number."<<endl;
    }
    return 0;
}