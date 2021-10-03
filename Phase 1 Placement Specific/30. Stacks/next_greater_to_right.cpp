#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	vector<ll> v;
	stack<ll> s;
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=n-1;i>=0;i--)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top()>a[i])
			v.push_back(s.top());
		else if(s.size()>0 && s.top()<=a[i])
		{
			while(s.size()>0 && s.top()<=a[i])
				s.pop();
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top());
		}
		s.push(a[i]);
	}

	for(ll i=n-1;i>=0;i--)
	{
		cout<<v[i]<<"\n";
	}
	return 0;
}