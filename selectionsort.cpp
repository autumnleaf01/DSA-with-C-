#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionsort(int arr[], int n){
    int min_idx;
    for(int i=0; i<n; i++){
        min_idx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    cout<<"Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}