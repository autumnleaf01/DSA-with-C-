#include<iostream>
using namespace std;
int main(){
    int *arr, *arrP;
    arr = new int[5];
    arrP = arr;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
//So, I learned how to create a dynamic array in C++ using pointers
