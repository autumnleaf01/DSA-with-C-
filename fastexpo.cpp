#include<iostream>
using namespace std;

void fastExpo(int n, int x){
    int ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }
    cout << ans << endl;
}
int main(){
    fastExpo(9,3);
    return 0;
}