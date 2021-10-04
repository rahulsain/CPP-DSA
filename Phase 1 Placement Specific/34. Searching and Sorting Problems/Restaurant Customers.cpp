/*
You are given the arrival and leaving times of n customers in a restaurant.

What was the maximum number of customers in the restaurant at any time?

Input

The first input line has an integer n: the number of customers.

After this, there are n lines that describe the customers. Each line has two integers a and b: the arrival and leaving times of a customer.

You may assume that all arrival and leaving times are distinct.

Output

Print one integer: the maximum number of customers.

Constraints
1≤n≤2⋅105
1≤a<b≤109
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int cnt=0,ans=INT_MIN;
    while(n--){
        int a,b;
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,0});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i].second==1){
            cnt++;
        }
        else{
            cnt--;
        }
        ans=max(ans,cnt);
        // cout<<v[i].first<<" "<<cnt<<endl;
    }
    cout<<ans;
}