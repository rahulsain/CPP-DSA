/*Problem Statement:
There are n cities and m roads between them. Your task is to process q queries
where you have to determine the length of the shortest route 
between two given cities.

Constraints
1≤n≤500
1≤m≤n2
1≤q≤105
1≤a,b≤n
1≤c≤109
Example

Input:
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2

Output:
5
5
8
-1
3
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
 
const int nax = 5e2+5;
const int inf = 1e15;
int dp[nax][nax];
int n,m,q;
//Floyd Warshall Algorithm
void solve()
{
    for(int i=1 ; i<=n ;i++ ) dp[i][i] = 0;
   for(int k=1;k<=n;k++)
   {
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
               dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
           }
       }
   }
}
signed main()
{
   fast;
   cin>>n>>m>>q;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
        dp[i][j]=inf;
   }
   while(m--)
    {
       int x,y,z;
       cin>>x>>y>>z;
       dp[x][y]=min(dp[x][y],z);
       dp[y][x]=min(dp[y][x],z);
    }
  solve();
  while(q--)
  {
      int g,h;
      cin>>g>>h;
      if(dp[g][h]!= inf)        cout<<dp[g][h]<<"\n";
      else
            cout<<-1<<"\n";
  }
  return 0;
}