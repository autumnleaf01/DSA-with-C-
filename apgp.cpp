//Hi, Today i'm going to write a code for checking if the given array is an arithmetic progression or goemetric progression
//I think i started loving code
#include<iostream>
using namespace std;

bool isAP(int*, int);
bool isGP(int*, int);

int main(){
    const int MAX = 5;
    bool ap, gp;
    int arr[MAX] = {};

    for(int i=0; i<MAX; i++){
        cout<<"Enter the elements for an array: "<<endl;
        cin>>arr[i];
    }
    
    ap = isAP(arr, MAX);
    if(ap == true){
        cout<<"Array is an arithmetic progression"<<endl;
        }
    else{
        cout<<"The sequence is not an arithmetic progression"<<endl;
    }

    gp = isGP(arr, MAX);
    
    if(gp == true){
        cout<<"The sequence is an goemetric progression"<<endl;
    }
    else{
        cout<<"The sequence is not an goemetric progression"<<endl;
    }
    return 0;
}

bool isAP(int *arr, int size){
    bool ap = true;
    int diff = arr[1] - arr[0];
    for(int i=2; i<size; i++){
        if((arr[i] - arr[i-1])!= diff){
            ap = false;
            break;
        }
    }
    return ap;
}

bool isGP(int *arr,int size){
    bool gp = true;
    int div = arr[1]/arr[0];
    for(int i=2; i<size; i++){
        if((arr[i]/arr[i-1])!= div){
            gp = false;
            break;
        }
    }
    return gp;
}
