#include<iostream>
using namespace std;
int gridways(int n, int m, int r, int c, string ans = ""){
    if(r == n-1 && c == m-1){
        cout << ans << endl;
        return 1;
    }
    if(r >= n || c>= m){
        return 0;
    }
    int v1 = gridways(n, m, r+1, c, ans + "D"); //for down
    int v2 = gridways(n,m,r, c+1, ans + "R"); // for right
    return v1 + v2;

}
int main(){
    int n =3;
    int m =3;
    string ans = "";
    cout << gridways(n, m, 0, 0, ans) << endl;
    return 0;
}