//Hello My name is Ritik
//Toay am going to write a code to convert an integer to string
//So, the complexity is we're not going to use any functions
//We'll use the fundamentals to solve the problem
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int OriginalNum = num;
    char str[20]; //We're using additional space to store the buffer 
    int i=0; //It'll check the index of the character array
    if(num==0){
        str[i++] = '0'; //If the number is 0 then we can directly dtore the zero
    }
    else if(num<0){
        num = -num; //If the number is negative then we can make it positive
    }
    while(num>0){
        int digit = num%10;
        str[i++] = digit + '0';
        num = num/10;
    }
    if(OriginalNum<0){
        str[i++] = '-';
    }
    str[i] = '\0'; //To terminate the string
    //Now, we need to reverse the string because we stored the digits in backwars
    int start = 0;
    int end = i-1;
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout<<"The string is: "<<str<<endl;
}
//So, here's the code to convert an inetger to string without using a fucntion