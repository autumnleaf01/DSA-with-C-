//We're going to create a 2D Array 
#include<iostream>
using namespace std;

class Matrix {
    private:
        const static int max = 3;
        int arr[max][max];

    public:
        Matrix();
        void initialise();
        void display();
        void matrixSum(Matrix&, Matrix&);
        void matrixMultiply();
        void transpose();
};
//We're creating a constructor on which we'll intitalise the array with value zero.
Matrix::Matrix(){
    for(int i=0;i<max;i++){
        for(int j=0; j<max; j++){
            arr[i][j] = 0;
        }
    }
}
void Matrix::initialise(){
    cout<<"Initialisation has started..."<<endl;
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            cout<<"Enter the elements for an array:"<<endl;
            cin>>arr[i][j];
        }
    }
}
void Matrix::display(){
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Matrix::matrixSum(Matrix &arr1, Matrix &arr2){
    cout<<"Matrix Sum has started: "<<endl;
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            arr[i][j] = arr1.arr[i][j] + arr2.arr[i][j];
        }
    }
}
void Matrix::transpose(){
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    Matrix m,n;
    m.initialise();
    m.display();
    n.initialise();
    n.display();
    m.matrixSum(m,n);
    m.display();
    m.transpose();
}