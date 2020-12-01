#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> permute(vector<int> nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    do{
        ans.push_back(nums);
    } while(next_permutation(nums.begin(),nums.end()));
    return ans;
}

int main(){
//vector is a collection of array that we can send to the function, passing its reference
    vector<vector<int>> res = permute({1,2,1,2});
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }    

    return 0;
}