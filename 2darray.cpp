#include<iostream>
using namespace std;
int main(){
    int **marks = new int*[5];
    for(int i=0; i<5; i++){
        marks[i] = new int[5];
    }
    int x = 1;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            marks[i][j] = x++;
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<5; ++i){
        delete[] marks[i];
    }
    delete[] marks;
    cout<<marks[1][3]<<endl; // this will cause undefined behavior as we have already deallocated the memory
    return 0;
}