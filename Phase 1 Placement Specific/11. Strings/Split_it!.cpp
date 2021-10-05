/*
Kawashiro Nitori is a girl who loves competitive programming.

One day she found a string and an integer. As an advanced problem setter, she quickly thought of a problem.

Given a string s and a parameter k, you need to check if there exist k+1 non-empty strings a1,a2...,ak+1, such that
s=a1+a2+…+ak+ak+1+R(ak)+R(ak−1)+…+R(a1).
Here + represents concatenation. We define R(x) as a reversed string x. For example R(abcd)=dcba. Note that in the formula above the part R(ak+1) is intentionally skipped.

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100)  — the number of test cases. The description of the test cases follows.

The first line of each test case description contains two integers n, k (1≤n≤100, 0≤k≤⌊n2⌋)  — the length of the string s and the parameter k.

The second line of each test case description contains a single string s of length n, consisting of lowercase English letters.

Output
For each test case, print "YES" (without quotes), if it is possible to find a1,a2,…,ak+1, and "NO" (without quotes) otherwise.

You can print letters in any case (upper or lower).

Example input:
7
5 1
qwqwq
2 1
ab
3 1
ioi
4 2
icpc
22 0
dokidokiliteratureclub
19 8
imteamshanghaialice
6 3
aaaaaa

Output:
YES
NO
YES
NO
YES
NO
NO

Note:
In the first test case, one possible solution is a1=qw and a2=q.

In the third test case, one possible solution is a1=i and a2=o.

In the fifth test case, one possible solution is a1=dokidokiliteratureclub.
*/

#include<bits/stdc++.h>
#define N 205000
#define int long long
using namespace std;
int read()
{
	int a=0;int d=1;char c;
	while (c=getchar(),c<'0'||c>'9') if (c=='-') d=-1;a=a*10+c-48;
	while (c=getchar(),c>='0'&&c<='9') a=a*10+c-48;
	a*=d;return a;
}
char sen[N];
signed main()
{
    int t=read();
    while (t--)
    {
        int n=read();
        int k=read();
        scanf("%s",sen+1);
        int len=0;
        int ed=n/2;
        if (n&1)
            ed++;
        for (int i=1;i<ed;i++)
        {
            if (sen[i]==sen[n-i+1])
                len++;
            else
                break;
        }
        if (len>=k)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}