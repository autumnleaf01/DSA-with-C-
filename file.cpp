//Hey, there i'm Ritik and today we are going to write a code to erase an exclamation mark from a string
//So, we have already learned the fundamentals of string
//Now we are using functions to solve the problem
#include <algorithm>
#include <iostream>
using namespace std;

void eraseExclamationMark(string &str) {
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    eraseExclamationMark(str);
    cout << "The string after removing exclamation mark is: " << str << endl;
}
