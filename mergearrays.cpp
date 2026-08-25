//Today, we're going to create a program that merges two arrays into a single array.
#include<iostream>
using namespace std;

class Array{
    private:
    int *arr;
    int size;

    public:
    void create(int sz);
    void sort();
    void display();
    void merge(Array, Array);
    
};

void Array::create(int sz){
    size = sz;
    arr = new int[size];
    for(int i = 0; i < size; i++){
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void Array::sort(){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Array::display(){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}  

void Array::merge(Array arr1, Array arr2){
    size = arr1.size + arr2.size;
    arr = new int[size];
    for(int i = 0; i < arr1.size; i++){
        arr[i] = arr1.arr[i];
    }
    for(int i = 0; i < arr2.size; i++){
        arr[arr1.size + i] = arr2.arr[i];
    }
    sort();
}

int main(){
    Array arr1, arr2, arr3;
    int size1, size2;
    cout << "Enter the size of first array: ";
    cin >> size1;
    arr1.create(size1);
    cout << "Enter the size of second array: ";
    cin >> size2;
    arr2.create(size2);
    arr3.merge(arr1, arr2);
    cout << "The merged array is: ";
    arr3.display();
    return 0;
}
