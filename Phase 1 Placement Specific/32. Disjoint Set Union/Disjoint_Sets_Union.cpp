/*
Implement disjont sets union data structure. You have to perform queries of two types:

union u v — unite two sets that contain u and v, respectively;
get u v — check that two elements u and v belong to the same set.
Input
The first line of the input contains two integers n and m (1≤n,m≤105) — the number of elements and the number of queries. Next m lines contain queries, one per line. For a query union the line looks like union u v (1≤u,v≤n). For a query get the line looks like get u v (1≤u,v≤n).

Output
Output the result of each query get one per line in the respected order: "YES", if the elements belong to the same set, and "NO", otherwise.
*/
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define rfo1(i,n) for(int i=n;i>o;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define mivi map<int,vector<int>>
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
int par[100001];
int find(int a){return par[a]<0?a:par[a]=find(par[a]);}
int sz[100001];
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
    int n,q;
    cin>>n>>q;
    fo1(i,n) par[i]=-1,sz[i]=1;
    while(q--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        if(s=="union")
        {
            Union(a,b);
        }
        else
        {
            if(find(a)==find(b)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
    

    return 0;
}