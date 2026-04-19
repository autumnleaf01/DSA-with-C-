#include<iostream>
using namespace std;
void removeDuplicate(string str, string ans,int i, bool map[26]) {
    if(i == str.size()){
        cout<<ans<<" ";
        return;
    }
    int mapIdx = int(str[i] - 'a');
    if(map[mapIdx]){
        removeDuplicate(str, ans , i+1, map);
    }
    else{
        map[mapIdx] = true;
        removeDuplicate(str, ans + str[i], i+1, map);
    }
}
int main(){
    string str = "jfkdfjajjaskdf";
    string ans = "";
    bool map[26] = {false};
    removeDuplicate(str, ans, 0, map);
    cout<<ans;
} 