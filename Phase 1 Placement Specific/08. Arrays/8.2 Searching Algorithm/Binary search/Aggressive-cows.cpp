#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, c;
bool fun(ll mid, ll a[])
{
	ll cnt=1,prev=a[1];
	for(ll i=2;i<=n;i++)
	{
		if(a[i]-prev >= mid)
		{
			cnt++; prev=a[i];
		}

	}
	if(cnt>=c)
		return true;
	return false;
}
void beast()
{
	cin>>n>>c;
	ll a[n+1];
	for(ll i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	ll lo=1,hi=a[n]-a[1];
	while(hi-lo>1)
	{
		ll mid=(hi+lo)/2;
		if(fun(mid,a))
			lo=mid;
		else
			hi=mid-1;

	}
	if(fun(hi,a))
		cout<<hi<<"\n";
	else
		cout<<lo<<"\n";
}
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		beast();
	}
	return 0; 
}