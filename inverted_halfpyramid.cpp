#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter  then number of rowa:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=n-1-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
}