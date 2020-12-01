#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> nums,vector<vector<int>> &ans,int idk){
    if(idk == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idk; i< nums.size(); i++){
        if(i != idk and nums[i] == nums[idk])
            continue;
        swap(nums[i],nums[idk]);
        solve(nums,ans,idk+1);
    }
}
//this function is broke as provided in notes(raise a PR when you get an answer)
// if you provide address of num , it will be broke
//fixed it by removing address of nums in solve function
vector<vector<int>> permute(vector<int> nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    solve(nums,ans,0);
    return ans;
}

int main(){
//vector is a collection of array that we can send to the function, passing its reference
    vector<vector<int>> res = permute({1,2,1,2,2,2,3});
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }    

    return 0;
}