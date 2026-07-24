//Today, i'm going to write a code to find trailing zeroes in a factorial
//We've two different methods to find trailing zeroes in a factorial
//Method 1: By calculating the factorial and then counting zeroes from the last digit 
//Method 2: By counting the number of pairs of 2 and 5 in the factorial
#include <iostream>
using namespace std;
int main(){
    int k, n, count = 0;
    cout<<"Enter a number to check the trailing zeroes in its factorial:";
    cin>>n;
    if(n>0){
        for(int i = 1; i <=n; i++){
            k = i;
            while(k%5 == 0){
                count++;
                k = k/5;
            }
        }
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    cout<<"The number of trailing zeroes in "<<n<<"! is: "<<count<<endl;
    return 0;
}