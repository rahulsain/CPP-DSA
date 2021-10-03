/*
There is an undirected graph and a sequence of operations of two types in the following format:

cut u v — remove edge u - v from the graph;
ask u v — check whether vertices u and v are in the same connected component.
After all the operations are applied, the graph contains no edges. Please, find the result of each operation of type ask.

Input
First line of input consists of three integers n, m and k (1 ≤ n ≤ 50 000, 0 ≤ m ≤ 100 000, m ≤ k ≤ 150 000) — the number of vertices in the graph, the number of edges and the number of operations, respectively .

Each of next m lines consists of two integers ui and vi (1 ≤ ui,  vi ≤ n) — ends of edge i. Vertices are numbered from 1, graph has no loops and multiple edges.

Each of the next k lines describes an operation in the following format:

"cut u v" (1 ≤ u,  v ≤ n) — remove an edge between vertices u and v
"ask u v" (1 ≤ u,  v ≤ n) — check whether vertices u and v are in the same component
Each edge is mentioned in operations of type cut once.

Output
For each of operation of type ask output "YES", if two given vertices are in the same component, and "NO" — otherwise. The order of the answers should correspond to the order of operations of type ask in input.
*/

#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define rfo1(i,n) for(int i=n;i>0;i--)
#define pii pair<int,int>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define mivi map<int,vector<int>>
#define int long long
#define tc int testcases;cin>>testcases;while(testcases--)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
int par[1000000];
int sz[1000000];
int find(int a){return par[a]<0?a:par[a]=find(par[a]);}
void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b) return;
    if(sz[a]>sz[b])
    {
        sz[a]+=sz[b];
        par[b]=a;

    }
    else
    {
        sz[b]+=sz[a];
        par[a]=b;
    }

}
signed main()
{
    fast
    int n,m,q;
    cin>>n>>m>>q;
    fo1(i,n) par[i]=-1,sz[i]=1;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        
    }
    vector<pair<string,pii>>v;
    while(q--)
    {

       string s;
       int a,b;
       cin>>s>>a>>b;
       v.push_back({s,{a,b}});
       
    }
    vector<string>ans;
   
    rfo(i,(int)v.size())
    {
        if(v[i].first=="ask")
        {
            if(find(v[i].second.first)==find(v[i].second.second)) ans.push_back("YES");
            else ans.push_back("NO");
        }
        else
        {
            Union(v[i].second.first,v[i].second.second);
        }
    }
    reverse(all(ans));
    for(auto i:ans) cout<<i<<"\n";

   
    

    return 0;
}