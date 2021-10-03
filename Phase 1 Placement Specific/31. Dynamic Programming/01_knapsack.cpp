#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101][101];

// RECURSIVE

ll knapsackR(ll wt[], ll val[], ll w, ll n)
{
	if(n==0||w==0)
		return 0;
	else if(wt[n-1]<=w)
		return max(val[n-1]+knapsackR(wt, val, w-wt[n-1], n-1), knapsackR(wt, val, w, n-1));
	return knapsackR(wt, val, w, n-1);
}

// MEMOIZATION

ll knapsackM(ll wt[], ll val[], ll w, ll n)
{
	if(n==0||w==0)
		return 0;
	if(dp[n][w]!=-1)
		return dp[n][w];
	else if(wt[n-1]<=w)
		return dp[n][w]=max(val[n-1]+knapsackM(wt, val, w-wt[n-1], n-1), knapsackM(wt, val, w, n-1));
	return dp[n][w]=knapsackM(wt, val, w, n-1);
}

// BOTTOM-UP APPROACH

ll knapsack(ll wt[], ll val[], ll w, ll n)
{
	for(ll i=0;i<n+1;i++)
	{
		for(ll j=0;j<w+1;j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
		}
	}
	for(ll i=1;i<n+1;i++)
	{
		for(ll j=1;j<w+1;j++)
		{
			if(wt[i-1]<=j)
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]] , dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][w];
}

int main()
{
	ll n;
	cin>>n;
	ll wt[n],val[n],w;
	for(ll i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(ll i=0;i<101;i++)
		for(ll j=0;j<101;j++)
			dp[i][j]=-1;
	cin>>w;
	ll ans=knapsack(wt, val, w, n);
	cout<<ans;
	return 0;
}
