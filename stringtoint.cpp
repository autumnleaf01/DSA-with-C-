//Hello, My Name is Ritik
//Today am gonna write a code to convert strings to integers in C++
//So, first of all, we need to include a character array to store strings
//then we will use the fundamentals to solve the problem without functiond
#include<iostream>
using namespace std;
int main(){
    char str[] = "534";
    int num = 0;
    for(int i=0; str[i]!='\0'; i++){
        num = num*10 + (str[i] - '0');
    }
    cout<<"The integer value is: "<<num;
}
//So, this code will convert a string to an integer 
//Thanks for seeing the code 