#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int largestRectangleArea(vector<int> &arr)
{       
    int n=arr.size();
    vector<int> left(n), right(n);
    stack<int> s; 
    //nsl
    
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            left[i] = -1;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if(s.empty())
                left[i] = -1;
            else
                left[i] = s.top();            
        }
        s.push(i);
    }
    
    //empty stack 
    while(!s.empty())
        s.pop();
    
    //nsr 
    int j = 0 ; 
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
            right[j++] = n;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            
            if(s.empty())
                right[j++] = n;
            else
                right[j++] = s.top();
        }
        s.push(i);
    }
    
    reverse(right.begin(),right.end());
     
    for(int i=0;i<n;i++)
        left[i] = right[i] - left[i] -1;
    
    int ans = INT_MIN;
    
    for(int i=0;i<n;i++)
    	ans=max(ans,left[i]*arr[i]);
            
     return ans;
}

int main()
{
	int n; cin>>n;
	vector<int> a(n);
	int ans;
	for(int i=0;i<n;i++)
		cin>>a[i];
	ans=largestRectangleArea(a);
	cout<<ans;

	return 0;
}