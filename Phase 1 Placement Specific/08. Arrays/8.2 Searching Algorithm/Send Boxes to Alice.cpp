/*

Christmas is coming, and our protagonist, Bob, is preparing a spectacular present for his long-time best friend Alice. This year, he decides to prepare n boxes of chocolate, numbered from 1 to n. Initially, the i-th box contains ai chocolate pieces.

Since Bob is a typical nice guy, he will not send Alice n empty boxes. In other words, at least one of a1,a2,…,an is positive. Since Alice dislikes coprime sets, she will be happy only if there exists some integer k>1 such that the number of pieces in each box is divisible by k. Note that Alice won't mind if there exists some empty boxes.

Charlie, Alice's boyfriend, also is Bob's second best friend, so he decides to help Bob by rearranging the chocolate pieces. In one second, Charlie can pick up a piece in box i and put it into either box i−1 or box i+1 (if such boxes exist). Of course, he wants to help his friend as quickly as possible. Therefore, he asks you to calculate the minimum number of seconds he would need to make Alice happy.

Input:
The first line contains a single integer n (1≤n≤105) — the number of chocolate boxes.

The second line contains n integers a1,a2,…,an (0≤ai≤1) — the number of chocolate pieces in the i-th box.

It is guaranteed that at least one of a1,a2,…,an is positive.

Output:
If there is no way for Charlie to make Alice happy, print −1.

Otherwise, print a single integer x — the minimum number of seconds for Charlie to help Bob make Alice happy.

Example input:
3
1 0 1

Output:
2

Example input:
1
1

Output:
-1


*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000006;
int n;
int a[maxn];
vector <int> v;

long long cost(int p) {
    long long ret = 0;
    for (int i = 0; i < v.size(); i += p) {
        int median = v[(i + i + p - 1) / 2];
        for (int j = i; j < i + p; ++j)
            ret += abs(v[j] - median);
    }
    return ret;
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] == 1) v.push_back(i);
    }
    if (v.size() == 1) {
        cout << -1 << endl;
        return 0;
    }
    long long ans = 1e18;
    int tmp = v.size(), p = 2;
    while (p * p <= tmp) {
        if (tmp % p == 0) {
            ans = min(ans, cost(p));
            while (tmp % p == 0)
                tmp /= p;
        }
        ++p;
    }
    if (tmp > 1)
        ans = min(ans, cost(tmp));
    cout << ans << endl;
    return 0;
}