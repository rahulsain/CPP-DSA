/* There are n projects you can attend. For each project, you know its starting and ending days and the amount of money you would get as reward. You can only attend one project during a day.

What is the maximum amount of money you can earn?

Input

The first input line contains an integer n: the number of projects.

After this, there are n lines. Each such line has three integers ai, bi, and pi: the starting day, the ending day, and the reward.

Output

Print one integer: the maximum amount of money you can earn.

Constraints
1≤n≤2⋅105
1≤ai≤bi≤109
1≤pi≤109
Example
Input:
4
2 4 4
3 6 6
6 8 2
5 7 3

Output:
7 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
struct pro{
    int st,ed,paisa;
};
bool cmp(pro a,pro b){
    return a.ed<b.ed; 
}
int dp[(int)2e5+10];
int binary(vector<pro> &v,int i){
    int lo=0,hi=i-1;
    int ans=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid].ed<v[i].st){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    vector<pro> v(n);
    for(int i=0;i<n;i++) cin>>v[i].st>>v[i].ed>>v[i].paisa;
    sort(v.begin(),v.end(),cmp);
    memset(dp,0,sizeof(dp));
    dp[0]=v[0].paisa;
    for(int i=1;i<n;i++){
        int inc=v[i].paisa;
        int idx=binary(v,i);
        int exc=dp[i-1];
        if(idx!=-1) inc+=dp[idx];
        dp[i]=max(inc,exc);
    }
    cout<<dp[n-1]<<endl;
}
signed main()
{
    solve();
}