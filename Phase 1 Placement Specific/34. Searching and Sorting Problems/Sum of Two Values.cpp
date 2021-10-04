/*
You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.

Input

The first input line has two integers n and x: the array size and the target sum.

The second line has n integers a1,a2,…,an: the array values.

Output

Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.

Constraints
1≤n≤2⋅105
1≤x,ai≤109
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
 
    ll n,x,flag=0;
    cin>>n>>x;
    ll a[n];
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]=i+1;
    }
    for(ll i=0;i<n;i++){
        if(m.count(x-a[i]) && i+1!=m[x-a[i]]){
            flag=1;
            cout<<i+1<<" "<<m[x-a[i]];
            break;
        }
    }
    if(!flag){
        cout<<"IMPOSSIBLE";
    }
}