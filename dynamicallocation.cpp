//Today, i'm going to write a code for dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
    int size;
    int *p, *cp;
    cout<<"Enter the size for an array: "<<endl;
    cin>>size;

    p = new int(size);
    cp = p;
    for(int i=0; i<size; i++){
        cout<<"Enter the elements for an array: "<<endl;
        cin>>*(cp+i);
    }
    cp = p;
    for(int i=0; i<size; i++){
        cout<<*(cp+1);
    }
    delete[] p;
}