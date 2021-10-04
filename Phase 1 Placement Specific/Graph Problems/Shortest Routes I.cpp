/*Problem Statement:
There are n cities and m flight connections between them. 
Your task is to determine the length of the shortest route from 
Syrjälä to every city.

Constraints
1≤n≤105
1≤m≤2⋅105
1≤a,b≤n
1≤c≤109
Example

Input:
3 4
1 2 6
1 3 2
3 2 3
1 3 4

Output:
0 5 2
*/

//Code(C++):

#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define int long long
#define pb push_back
#define pii pair< int,int >
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
 
const int nax = 1e5+5;
const int inf = 1e15;
vector<pii> v[nax] ;
vector<int> dist(nax , inf ) , vis(nax, 0);
//Dijkstra's Algorithm
void solve()
{
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   pq.push({0,1});
   dist[1]=0;
   while(!pq.empty())
   {
      int curr=pq.top().ss;
      int curr_d=pq.top().ff;
      pq.pop();
      if(vis[curr]) continue;
     vis[curr]=1;
      for(auto it: v[curr])
      {
           if(dist[it.ff]>curr_d+it.ss)
         {
          dist[it.ff]=curr_d+it.ss;
            pq.push({dist[it.ff],it.ff});
         }
      }
   }
}
signed main()
{
   int n,m;
   cin>>n>>m;
   while(m--)
    {
       int x,y,z;
       cin>>x>>y>>z;
       v[x].pb({y,z});
    }
  solve();
  for(int i=1;i<=n;i++)
      cout<<dist[i]<<" ";
  return 0;
}
 