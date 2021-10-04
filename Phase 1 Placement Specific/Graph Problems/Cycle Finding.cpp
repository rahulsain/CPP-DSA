/*Problem Statement:
You are given a directed graph, and your task is to find out if  it contains
negative cycle, and also give an example of such a cycle.

Constraints
1≤n≤2500
1≤m≤5000
1≤a,b≤n
−109≤c≤109
Example

Input:
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2

Output:
YES
1 2 4 1
*/

//Code(C++):

#include <bits/stdc++.h>
using namespace std;
#define int long long
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
const int inf = 1e16;
const int nax = 3e3+10;
vector<int> lst;
//Bellman Ford
signed main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    int relax[n+1];
    vector<pair<pair<int,int>,int>> v(m);
    for(int i=0;i<m;i++)
        {
            cin>>v[i].ff.ff>>v[i].ff.ss>>v[i].ss;
           // v[i].ff.ff--;
            //v[i].ff.ss--;
        }
    vector<int> dis(n+1,inf);
    int x;
    for(int i=0;i<n;i++)
    {
        x=-1;
        for(int j=0;j<m;j++)
        {
                if(dis[v[j].ff.ff]+v[j].ss<dis[v[j].ff.ss])
                    {
                        dis[v[j].ff.ss]=dis[v[j].ff.ff]+v[j].ss;
                        relax[v[j].ff.ss]=v[j].ff.ff;
                        x=v[j].ff.ss;
                    }
        }
    }
        if(x==-1)   cout<<"NO\n";
        else
        {
            f(i,0,n)    x=relax[x];
            for(int k=x;;k=relax[k])
            {
                lst.pb(k);
                if(k==x && lst.size()>1)
                    break;
            }
            reverse(lst.begin(),lst.end());
            cout<<"YES\n";
            f(i,0,lst.size())   cout<<lst[i]<<" ";
            cout<<"\n";
        }
   return 0;
}