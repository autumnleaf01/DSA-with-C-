#include<iostream>
using namespace std;
/*void subArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k < j; k++){
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}*/
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int count = 0;    
    for(int i=0; i<5; i++){
        int sum = 0;
        int numsum = 0;
        for(int j=i; j<5; j++){
            sum += arr[j];
            cout << sum << " ";
            sum = sum*10;
            numsum += arr[j];
        }
        if(max < numsum){
            max = numsum;
            count = i;
        }
        cout << endl;
    }
    cout << "Max sum is " << max << " at index " << count;
    //subArr(arr, n);
    return 0;
}