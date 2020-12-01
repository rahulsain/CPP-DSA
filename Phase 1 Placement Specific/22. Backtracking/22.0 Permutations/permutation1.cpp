#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &nums,vector<vector<int>> &ans,int idk){
    if(idk == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idk; i< nums.size(); i++){
        swap(nums[i],nums[idk]);
        solve(nums,ans,idk+1);
        swap(nums[i],nums[idk]);
    }
}

vector<vector<int>> permute(vector<int> nums){
    vector<vector<int>> ans;
    solve(nums,ans,0);
    return ans;
}

int main(){
//vector is a collection of array that we can send to the function, passing its reference
    vector<vector<int>> res = permute({1,2,3});
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }    

    return 0;
}