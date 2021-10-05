/*
A string s of length n (1≤n≤26) is called alphabetical if it can be obtained using the following algorithm:

first, write an empty string to s (i.e. perform the assignment s := "");
then perform the next step n times;
at the i-th step take i-th lowercase letter of the Latin alphabet and write it either to the left of the string s or to the right of the string s (i.e. perform the assignment s := c+s or s := s+c, where c is the i-th letter of the Latin alphabet).
In other words, iterate over the n first letters of the Latin alphabet starting from 'a' and etc. Each time we prepend a letter to the left of the string s or append a letter to the right of the string s. Strings that can be obtained in that way are alphabetical.

For example, the following strings are alphabetical: "a", "ba", "ab", "bac" and "ihfcbadeg". The following strings are not alphabetical: "z", "aa", "ca", "acb", "xyz" and "ddcba".

From the given string, determine if it is alphabetical.

Input:
The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

Each test case is written on a separate line that contains one string s. String s consists of lowercase letters of the Latin alphabet and has a length between 1 and 26, inclusive.

Output:
Output t lines, each of them must contain the answer to the corresponding test case. Output YES if the given string s is alphabetical and NO otherwise.

You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive answer).

Example input:
11
a
ba
ab
bac
ihfcbadeg
z
aa
ca
acb
xyz
ddcba

Output:
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO

Note:
The example contains test cases from the main part of the condition.
*/


#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define rfo(i, n) for (int i = n - 1; i >= 0; i--)
#define fo1(i, n) for (int i = 1; i <= n; i++)
#define rfo1(i, n) for (int i = n; i > 0; i--)
#define pii pair<int, int>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define mii map<int, int>
#define mivi map<int, vector<int>>
#define int long long
#define tc            \
    int testcases;    \
    cin >> testcases; \
    while (testcases--)
#define setbits(x) builtin_popcountll(x)
#define zerobits(x) builtin_ctzll(x)
#define fill(x, y) memset(x, y, sizeof(x))
#define f(i, container) for (auto i : container)
int findd(string &s, char a)
{
    fo(i, s.size())
    {
        if (s[i] == a)
            return i;
    }
    return -1;
}
signed main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    tc
    {
        string s;
        cin >> s;
        string y = s;
        sort(all(y));
        bool f = 1;
        fo(i, s.size())
        {
            if (y[i] != (char)(i + 'a'))
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            int vlef, vright;
            int x = findd(s, 'a');
            vlef = x - 1;
            vright = x + 1;
            fo1(i, s.size())
            {
                x = findd(s, (char)i + 'a');
                // cout<<x<<"\n";
                if (x == vlef)
                    vlef--;
                else if (x == vright)
                    vright++;
                else
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
 
    return 0;
}