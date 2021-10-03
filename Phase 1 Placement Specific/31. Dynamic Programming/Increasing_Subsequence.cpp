/*
You are given an array containing n integers. Your task is to determine the longest increasing subsequence in the array, i.e., the longest subsequence where every element is larger than the previous one.

A subsequence is a sequence that can be derived from the array by deleting some elements without changing the order of the remaining elements.

Input

The first line contains an integer n: the size of the array.

After this there are n integers x1,x2,…,xn: the contents of the array.

Output

Print the length of the longest increasing subsequence.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
8
7 3 5 3 6 2 9 8

Output:
4
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;
    for (int i = 0; i < n; i++) {
        int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j-1] < a[i] && a[i] < d[j])
            d[j] = a[i];
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}
void solve(){
	int n;
	cin>>n;
	vector<int> ar(n);
	for(int i=0;i<n;i++) cin>>ar[i];
	cout<<lis(ar);
}
signed main()
{
	solve();
}