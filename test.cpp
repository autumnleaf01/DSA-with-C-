#include<iostream>
#include<cstring>
using namespace std;
void toUpper(char arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
int main(){
    char arr[] ="ApPle";
    toUpper(arr, strlen(arr));
    cout<<arr;
}