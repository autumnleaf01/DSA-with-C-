#include<iostream>
using namespace std;
int gridways(int n, int m, int r, int c){
    if(r == n-1 && c == m-1){
        return 1;
    }
    if(r >= n || c>= m){
        return 0;
    }
    int v1 = gridways(n, m, r+1, c); //for down
    int v2 = gridways(n,m,r, c+1); // for right
    return v1 + v2;

}
int main(){
    int n =3;
    int m =3;
    cout << gridways(n, m, 0, 0) << endl;
    return 0;
}a C++ header and won't be recognized correctly if the file is treated as a C file.