#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool isValid(string s)
{
	ll n=s.size();
	stack<char> st;
	bool ans=true;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='{' || s[i]=='[' || s[i]=='(')
			st.push(s[i]);
		else if(s[i]==')')
		{
			if(!st.empty() && st.top()=='(')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}
		else if(s[i]==']')
		{
			if(!st.empty() && st.top()=='[')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}
		else if(s[i]=='}')
		{
			if(!st.empty() && st.top()=='{')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}

	}
	if(!st.empty())
		return false;
	return ans;
}

int main()
{
	string s="{([])}";
	if(isValid(s))
		cout<<"valid string\n";
	else cout<<"invalid string\n";
	return 0;
}