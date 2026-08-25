#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int rows = 3;
    int cols = 3;
    int **ptr = new int*[rows];
    for(int i=0; i<cols; i++){
        ptr[i] = new int[cols];
    }
    time_t t;
    time(&t);
    srand((unsigned int)t);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            ptr[i][j] = rand() % 10;
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        delete[]ptr[i];
    }
    delete[] ptr;
}