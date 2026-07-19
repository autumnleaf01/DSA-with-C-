#include<iostream>
#include<iomanip>
using namespace std;
void denomination(int den[],int amount){
    for(int i=8; i>=0; i--){
        if(amount>=den[i]){
            int count = amount/den[i];
            cout<<den[i]<<setw(4)<<"x"<<setw(4)<<count<<setw(2)<<"="<<setw(2)<<den[i]*count<<endl;
        }   amount = amount % den[i];
        if(amount == 0){
            break;
        }
    }
}
int main(){
    int den[] = {1,2,5,10,20,50,100,200,500};
    int amount;
    cout<<"Enter the amount:";
    cin>>amount;
    denomination(den,amount);
    return 0;

}