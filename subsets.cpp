#include<iostream>
using namespace std;
void subsets(string str, string current){
    if(str.length() == 0){
        cout << current << endl;
        return;
    }
    char ch = str[0];
    subsets(str.substr(1, str.size() - 1), current + ch);
    subsets(str.substr(1, str.size() - 1), current);
}
int main(){
    subsets("abc", "");
    return 0;
}