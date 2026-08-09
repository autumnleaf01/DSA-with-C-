#include<iostream>
using namespace std;

const int MAX = 50;

class Array{
    private:
        int arr[MAX];
    
    public:
        Array();
        void insert();
        void reverse();
        void display();

};

Array::Array(){
    for(int i=0; i<MAX; i++){
        arr[i] = 0;
    }
}

void Array::insert(){
    for(int i=0; i<MAX; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>arr[i];
    }
}

void Array::reverse(){
    int start = 0;
    int end = MAX - 1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Array::display(){
    for(int i=0; i<MAX; i++){
        cout<<"Element "<<i+1<<": "<<arr[i]<<endl;
    }
}

int main(){
    Array a1;
    a1.insert();
    a1.reverse();
    a1.display();
    return 0;
}