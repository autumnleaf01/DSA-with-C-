#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // Upper half of butterfly
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j <= i || j >= n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    // Lower half of butterfly
    for(i=n-1; i>=0; i--){
        for(j=0; j<n; j++){
            if(j <= i || j >= n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
