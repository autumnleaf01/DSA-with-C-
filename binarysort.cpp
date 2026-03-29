#include<iostream>
using namespace std;
void binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            cout <<"Element found at index :" <<mid << endl;
            return;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout <<"Element not found" << endl;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    binarysearch(arr, n, key);
    

}