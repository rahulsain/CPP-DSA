#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll c,m,x;
bool fun(ll mid)
{
	if(min(c,m)>=mid)
	{
		ll cl=c-mid;
		ll ml=m-mid;
		if((cl+ml+x)>=mid)
			return true;
	}
	return false;
}
void beast()
{
	cin>>c>>m>>x;
	ll lo=0,hi=(c+m+x)/3;
	while(hi-lo>1)
	{
		ll mid=(hi+lo)/2;
		if(fun(mid))
			lo=mid;
		else
			hi=mid-1;
	}
	if(fun(hi))
		cout<<hi<<endl;
	else
		cout<<lo<<endl;
}
int main()
{
	ll q;
	while(q--)
		beast();
	return 0;
}