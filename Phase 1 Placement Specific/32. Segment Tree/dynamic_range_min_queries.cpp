/*Given an array of n integers, your task is to process q queries of the following types:
update the value at position k to u
what is the minimum value in range [a,b]?
Input

The first input line has two integers n and q: the number of values and queries.

The second line has n integers x1,x2,…,xn: the array values.

Finally, there are q lines describing the queries. Each line has three integers: either "1 k u" or "2 a b".

Output

Print the result of each query of type 2.

Constraints
1≤n,q≤2⋅105
1≤xi,u≤109
1≤k≤n
1≤a≤b≤n
Example

Input:
8 4
3 2 4 5 1 1 5 3
2 1 4
2 5 6
1 2 3
2 1 4

Output:
2
1
3
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define f() for (ll i = 0; i < n; i++)
#define f1() for (ll i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define int ll
#define vi vector<int>
#define a6 1000001
#define p push
#define pii pair<int, int>
#define um unordered_map<int, int>
#define flag                   \
    if (fg)                    \
        cout << "YES" << endl; \
    else                       \
        cout << "NO" << endl;
#define fo(o, n) for (int i = o; i < n; i++)
#define a7 10000001
#define read(x) \
    int x;      \
    cin >> x;
#define inf INT_MAX
#define endl "\n"
#define len(s) s.size()
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
 
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
 
vi ar;
vi seg;
void build(int st, int en, int tr_idx)
{
    if (st == en)
    {
        seg[tr_idx] = ar[st];
        return;
    }
    int mid = (st + en) / 2;
    build(st, mid, 2 * tr_idx);
    build(mid + 1, en, 2 * tr_idx + 1);
    seg[tr_idx] = min(seg[2 * tr_idx], seg[2 * tr_idx + 1]);
}
int query(int st, int en, int tr_idx, int l, int r)
{
    if (st > r or en < l)
        return INT_MAX;
    if (st >= l and en <= r)
        return seg[tr_idx];
    int mid = (st + en) / 2;
    return min(query(st, mid, 2 * tr_idx, l, r), query(mid + 1, en, 2 * tr_idx + 1, l, r));
}
void update(int idx, int st, int tr_idx, int en, int val)
{
    if (st == en)
    {
        seg[tr_idx] = val;
        ar[idx] = val;
        return;
    }
    int mid = (st + en) / 2;
    if (idx > mid)
        update(idx, mid + 1, 2 * tr_idx + 1, en, val);
    else
        update(idx, st, 2 * tr_idx, mid, val);
    seg[tr_idx] = min(seg[2 * tr_idx], seg[2 * tr_idx + 1]);
}
void solve()
{
    int n, q;
    cin >> n >> q;
    ar = vi(n);
    seg = vi(4 * n + 5);
    f() cin >> ar[i];
    build(0, n - 1, 1);
    debug(seg);
    while (q--)
    {
        int a, b, c;
        cin >> c >> a >> b;
        if (c == 2)
        {
            a--;
            b--;
            cout << query(0, n - 1, 1, a, b) << endl;
        }
        else
        {
            a--;
            update(a, 0, 1, n - 1, b);
            // cout << b << endl;
        }
    }
}
signed main()
{
    fast
    solve();
}