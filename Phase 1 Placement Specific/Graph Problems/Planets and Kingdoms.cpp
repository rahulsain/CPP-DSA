/*Problem Statement:
A game has n planets, connected by m teleporters. Two planets a and b belong
to the same kingdom exactly when there is a route both from a to b and from b
to a. Your task is to determine for each planet its kingdom.

Constraints
1≤n≤105
1≤m≤2⋅105
1≤a,b≤n
Example

Input:
5 6
1 2
2 3
3 1
3 4
4 5
5 4

Output:
2
1 1 1 2 2
*/

//Code(C++):

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for (int i = a; i < n; i++)
#define fr(i,a,n) for (int i = n; i >=a; i--)
#define m9 1000000009
#define m7 1000000007
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define ff first
#define ss second
#define pii pair<int, int>
#define mii map<int, int>
#define mkp make_pair
#define pb push_back
#define fastio std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int n,m;
vector<int> ar[200005];
vector<int> tr[200005];
vector<int> Time;
vector<int> Scc;
vector<int> ans(200001);
int vis[200001];
//Kosaraju's algorithm
void dfs(int node)
{
    vis[node]=1;
    for(auto it: ar[node])
    {
        if(vis[it]==0)
            dfs(it);
    }
    Time.pb(node);
}
void dfs1(int node)
{
    vis[node]=1;
    for(auto it: tr[node])
    {
        if(vis[it]==0)
            dfs1(it);
    }
    Scc.pb(node);
}
int main()
{
  cin>>n>>m;
  int a,b;
  while(m--)
  {
      cin>>a>>b;
      ar[a].pb(b);
      tr[b].pb(a);
  }
  memset(vis,0,sizeof(vis));
  f(i,1,n+1) 
  {
      if(vis[i]==0)
        dfs(i);
  }
  memset(vis,0,sizeof(vis));
  reverse(Time.begin(),Time.end());
  int cnt=0;
  f(i,0,Time.size()) 
  {
      if(vis[Time[i]]==0)
        {
            Scc.clear();
            dfs1(Time[i]);
            cnt++;
            for(int i=0;i<Scc.size();i++)
               {
                   ans[Scc[i]]=cnt;
                   //cout<<cnt<<" ";
               }
        }
  }
  cout<<cnt<<"\n";
  for(int i=1;i<n+1;i++)
        cout<<ans[i]<<" ";
  return 0;
}