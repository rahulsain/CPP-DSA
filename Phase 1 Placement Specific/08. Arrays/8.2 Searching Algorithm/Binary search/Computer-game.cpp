#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll k,n,a,b;
bool fun(ll mid)
{
	ll x=k-mid*a;
	ll y=x-(n-mid)*b;
	if(x>0 && y>0)
		return true;
	return false;
}
void beast()
{
	cin>>k>>n>>a>>b;
	if(n*b>=k)
	{
		cout<<"-1"<<"\n";
		return;
	}
	ll lo=0,hi=n;
	while(hi-lo>1)
	{
		ll mid=(hi+lo)/2;
		if(fun(mid))
			lo=mid;
		else
			hi=mid-1;
	}
	if(fun(hi))
		cout<<hi<<"\n";
	else
		cout<<lo<<"\n";

}
int main()
{
	ll q; cin>>q;
	while(q--)
	{
		beast();
	}
	return 0;
}