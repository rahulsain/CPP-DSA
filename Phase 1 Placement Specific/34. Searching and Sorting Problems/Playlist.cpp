/*
You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.

What is the longest sequence of successive songs where each song is unique?

Input

The first input line contains an integer n: the number of songs.

The next line has n integers k1,k2,…,kn: the id number of each song.

Output

Print the length of the longest sequence of unique songs.

Constraints
1≤n≤2⋅105
1≤ki≤109
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
    int a[n+1];
    map<int,int>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cur=1,ans=0;
    for(int i=1;i<=n;i++){
        cur=max(cur,m[a[i]]+1);
        ans=max(ans,i-cur+1);
        m[a[i]]=i;
    }
    cout<<ans<<endl;
}