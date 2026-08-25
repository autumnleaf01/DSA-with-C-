#include<iostream>
#include<vector>
using namespace std;


void Pair(){
    pair<int, int> p = {1,3};
    cout<<p.first<<endl;
    pair<int, pair<int, int>> s = {1,{2,3}};
    cout<<s.first<<" "<<s.second.second<<" "<<s.second.first<<endl;
    pair<int, int> arr[] ={{1,2},{2,3}};
    cout<<arr[0].first; 
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;
}