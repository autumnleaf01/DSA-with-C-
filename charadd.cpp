#include<iostream>
using namespace std;
char inc(char ch){
    if(ch >= 'a' && ch < 'z'){
        return ch + 1;
    }
    else if(ch == 'z'){
        return 'a';
    }
}
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    char result = inc(ch);
    cout<<"The next character is "<<result<<endl;
    return 0;
}