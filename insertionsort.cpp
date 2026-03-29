#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void insertionsort(int arr[], int n){
    for(int i=0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev] < curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
            arr[prev + 1] = curr;
    }

}
int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, n);
    cout<<"Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}