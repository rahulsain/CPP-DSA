#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int ar[100001] , tree[400004];
 
void build(int node , int start , int end)
{
	if(start == end)
	{
		tree[node] = ar[start];
		return ;
	}
 
	int mid = (start + end) / 2;
	build(2*node , start , mid);
	build(2*node+1 ,mid+1 , end);
 
	tree[node] = min(tree[2*node] , tree[2*node+1]);
}
 
int query(int node , int start , int end , int l , int r)
{
	if(start > r || end < l) return INT_MAX;
 
	if(start >= l && end <= r) return tree[node];
 
	int mid = (start + end) / 2;
 
	return min(query(2*node , start , mid , l , r) , query(2*node+1 , mid+1 , end , l , r));
}
 
int main()
{
	int n , q , l , r;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>ar[i];
 
	build(1 , 1 , n);
	cin>>q;
 
	while(q--)
	{
		cin>>l>>r;
		cout<<query(1 , 1 , n , l+1 , r+1)<<endl;
	}
}