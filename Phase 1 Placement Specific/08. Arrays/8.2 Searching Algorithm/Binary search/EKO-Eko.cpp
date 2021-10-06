#include<bits/stdc++.h>
using namespace std;
#define int long long

int check(int mid, int a[], int m, int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
		ans+=max(a[i]-mid, 0ll);
	if(ans>=m) return 1;
	else return 0;
}

signed main()
{
	int n,mx=0,m; cin>>n>>m; int a[n+1];
	for(int i=0;i<n;i++)
	{	cin>>a[i];
		mx=max(a[i],mx);
	}
	sort(a,a+n);
	int lo=0,hi=mx,id=0;
	while(hi<=lo)
	{
		int mid=(lo+hi)/2;
		if(check(mid,a,m,n)==1)
		{
			lo=mid+1; id=mid;
		}
		else
			hi=mid-1;
	}
	if(check(lo,a,m,n)==1)
		cout<<lo;
	else if(check(hi,a,m,n)==1)
		cout<<hi;
	else
	cout<<id<<endl;
	return 0;
}