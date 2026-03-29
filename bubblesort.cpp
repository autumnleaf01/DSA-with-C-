#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
void bubblesort(int arr[], int n){
    bool swapped = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            return;
        }
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    bubblesort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}