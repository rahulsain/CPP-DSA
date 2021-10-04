/*Problem Statement:
There are n cities and m roads between them. Unfortunately, 
 the condition of the roads is so poor that they cannot be used. 
 Your task is to repair some of the roads so that there will be a decent route between any two cities.
 For each road, you know its reparation cost, and you should find a solution
 where the total cost is as small as possible.

 Constraints
1≤n≤105
1≤m≤2⋅105
1≤a,b≤n
1≤c≤109
Example

Input:
5 6
1 2 3
2 3 5
2 4 2
3 4 8
5 1 7
5 4 4

Output:
14
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
ll n,m;
ll par[200001];
//MST(Minimum Spanning Tree)
struct edge
{
    ll a;
    ll b;
    ll w;
};
edge arr[200001];
bool cmp(edge g,edge h)
{
    return (g.w<h.w);
}
ll find(ll val)
{
    if(par[val]==-1)       return val;
    return par[val]=find(par[val]);
}
void merge(ll c,ll d)
{
   par[c]=d;
}
int main()
{
   cin>>n>>m;
   f(i,0,m)
   {
       cin>>arr[i].a>>arr[i].b>>arr[i].w;
   }
   f(i,1,n+1)
        par[i]=-1;
    sort(arr,arr+m,cmp);
    ll sum=0,valid=0;
    f(i,0,m)
    {
        ll c=find(arr[i].a);
        ll d=find(arr[i].b);
        if(c!=d)
        {
            sum += (arr[i].w);
            merge(c,d);
            valid++;
        }
    }
    if(valid==n-1)
        cout<<sum<<"\n";
    else    cout<<"IMPOSSIBLE\n";
   return 0;
}