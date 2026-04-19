#include<iostream>
using namespace std;
#include<vector>
vector<int> pairsum(vector<int> arr, int sum){
    vector<int> ans;
    int st = 0, end = arr.size()-1;
    while(st<end){
        if(arr[st] + arr[end] == sum){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(arr[st] + arr[end] < sum){
            st++;
        }
        else{
            end--;
        }
    }
}
int main(){
    vector<int> arr = {1,2,4,2,4,5,6,7,8,9};
    vector<int> result = pairsum(arr, 13);
    cout<<"The pair is: "<<arr[result[0]]<<" and "<<arr[result[1]]<<endl;
    return 0;   
}