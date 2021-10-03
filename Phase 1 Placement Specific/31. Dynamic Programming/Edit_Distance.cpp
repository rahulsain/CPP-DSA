/*
The edit distance between two strings is the minimum number of operations required to transform one string into the other.

The allowed operations are:
Add one character to the string.
Remove one character from the string.
Replace one character in the string.
For example, the edit distance between LOVE and MOVIE is 2, because you can first replace L with M, and then add I.

Your task is to calculate the edit distance between two strings.

Input

The first input line has a string that contains n characters between A–Z.

The second input line has a string that contains m characters between A–Z.

Output

Print one integer: the edit distance between the strings.

Constraints
1≤n,m≤5000
Example

Input:
LOVE
MOVIE

Output:
2 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
int dp[5001][5001];
string a,b;
int editDis(int n,int m){
	if(n==0) return m;
	if(m==0) return n;
	if(dp[n][m]!=-1) return dp[n][m];
	if(a[n-1]==b[m-1]){
		if(dp[n-1][m-1]!=-1) return dp[n][m]=dp[n-1][m-1];
		else return dp[n][m]=editDis(n-1,m-1);
	}
	else{
		int x,y,z;
		if(dp[n-1][m]!=-1) x=dp[n-1][m];
		else x=editDis(n-1,m);
 
		if(dp[n][m-1]!=-1) y=dp[n][m-1];
		else y=editDis(n,m-1);
 
		if(dp[n-1][m-1]!=-1) z=dp[n-1][m-1];
		else z=editDis(n-1,m-1);
 
		return dp[n][m]=1+min({x,y,z});
	}
}
void solve(){
	memset(dp,-1,sizeof(dp));
	cin>>a>>b;
	int n=(int)a.size(),m=(int)b.size();
	cout<<editDis(n,m);
}
signed main()
{
	solve();
}