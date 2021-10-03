/*
Dark is going to attend Motarack's birthday. Dark decided that the gift he is going to give to Motarack is an array a of n non-negative integers.

Dark created that array 1000 years ago, so some elements in that array disappeared. Dark knows that Motarack hates to see an array that has two adjacent elements with a high absolute difference between them. He doesn't have much time so he wants to choose an integer k (0≤k≤109) and replaces all missing elements in the array a with k.

Let m be the maximum absolute difference between all adjacent elements (i.e. the maximum value of |ai−ai+1| for all 1≤i≤n−1) in the array a after Dark replaces all missing elements with k.

Dark should choose an integer k so that m is minimized. Can you help him?

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤104)  — the number of test cases. The description of the test cases follows.

The first line of each test case contains one integer n (2≤n≤105) — the size of the array a.

The second line of each test case contains n integers a1,a2,…,an (−1≤ai≤109). If ai=−1, then the i-th integer is missing. It is guaranteed that at least one integer is missing in every test case.

It is guaranteed, that the sum of n for all test cases does not exceed 4⋅105.

Output
Print the answers for each test case in the following format:

You should print two integers, the minimum possible value of m and an integer k (0≤k≤109) that makes the maximum absolute difference between adjacent elements in the array a equal to m.

Make sure that after replacing all the missing elements with k, the maximum absolute difference between adjacent elements becomes m.

If there is more than one possible k, you can print any of them.

Example input:
7
5
-1 10 -1 12 -1
5
-1 40 35 -1 35
6
-1 -1 9 -1 3 -1
2
-1 -1
2
0 -1
4
1 -1 3 -1
7
1 -1 7 5 2 -1 5

Output:
1 11
5 35
3 6
0 42
0 0
1 2
3 4

Note:
In the first test case after replacing all missing elements with 11 the array becomes [11,10,11,12,11]. The absolute difference between any adjacent elements is 1. It is impossible to choose a value of k, such that the absolute difference between any adjacent element will be ≤0. So, the answer is 1.

In the third test case after replacing all missing elements with 6 the array becomes [6,6,9,6,3,6].

|a1−a2|=|6−6|=0;
|a2−a3|=|6−9|=3;
|a3−a4|=|9−6|=3;
|a4−a5|=|6−3|=3;
|a5−a6|=|3−6|=3.
So, the maximum difference between any adjacent elements is 3.
*/

#include <bits/stdc++.h>
using namespace std;
#define oo 1000000010
#define mod 1000000007
const int N = 300010;
int n , arr[N] ; 

void solve(){
    int mn = oo , mx = -oo;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++){
		if(i > 0 && arr[i] == -1 && arr[i - 1] != -1)
			mn = min(mn , arr[i - 1]) , mx = max(mx , arr[i - 1]);
		if(i < n - 1 && arr[i] == - 1 && arr[i + 1] != -1)
			mn = min(mn , arr[i + 1]) , mx = max(mx , arr[i + 1]);
	}
	int res = (mx + mn) / 2;
	int ans = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == -1)
			arr[i] = res;
		if(i)
			ans = max(ans,abs(arr[i] - arr[i - 1]));
	}
	printf("%d %d\n",ans,res);
}


int main(){
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}