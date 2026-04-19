#include<iostream>
using namespace std;
void binarystring(int n, string ans){
    if(n==0){
        cout <<ans<<endl;
        return;
    }
    if(ans[ans.size() - 1] != '1'){
        binarystring(n-1, ans + '0');
        binarystring(n-1, ans + '1');
    }
    else{
        binarystring(n-1, ans + '0');
    }
}
int main(){
    string ans = "";
    binarystring(3, ans);
    return 0;
}