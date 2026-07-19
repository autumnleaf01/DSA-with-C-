#include<iostream>
using namespace std;

int factorial(int num_id){
    if(num_id == 0){
        return 1;
    }
    else{
        return num_id * factorial(num_id - 1);
    }
}

void curious(int num){
    int temp = num;
    int factSum = 0;
    while(temp>0){
        int num_id = temp % 10;
        factSum = factSum + factorial(num_id);
        temp = temp/10;
    }
    if(factSum == num){
        cout<<"A Curious Number"<<endl;
    }
    else{
        cout<<"Not a Curious Number"<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    curious(num);
    return 0;
}
