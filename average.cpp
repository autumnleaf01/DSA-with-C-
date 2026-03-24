#include<iostream>
    using namespace std;
    int main(){
        int n1,n2,n3;
        cout<<"Enter three numbers to find average:";
        cin>>n1>>n2>>n3;
        double average = (n1+n2+n3)/3.0;
        cout<<"Average of "<<n1<<","<<n2<<","<<n3<<" is "<<average<<endl;
        return 0;
    }