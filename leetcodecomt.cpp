#include<iostream>
#include<vector>
using namespace std;
int checkbonus(vector<vector<int>>& items){
    for(int i=0; i<items.size(); i++){
        int bonus = 0;
        for(int j=0; j<items[i].size(); j++){
            if(i!=j && items[j][0] % items[i][0] == 0){
                bonus++;
            }
        }
    cout << "Item " << i << " gives "
         << bonus << " free items\n";
    }
    return 0;
}
    
int main(){
    vector<vector<int>> items = {{1, 2}, {4, 5}, {7, 8}};
    cout << checkbonus(items) << endl;
    return 0;
}