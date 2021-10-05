/*

Casimir has a string s which consists of capital Latin letters 'A', 'B', and 'C' only. Each turn he can choose to do one of the two following actions:

he can either erase exactly one letter 'A' and exactly one letter 'B' from arbitrary places of the string (these letters don't have to be adjacent);
or he can erase exactly one letter 'B' and exactly one letter 'C' from arbitrary places in the string (these letters don't have to be adjacent).
Therefore, each turn the length of the string is decreased exactly by 2. All turns are independent so for each turn, Casimir can choose any of two possible actions.

For example, with s = "ABCABC" he can obtain a string s = "ACBC" in one turn (by erasing the first occurrence of 'B' and the second occurrence of 'A'). There are also many other options for a turn aside from this particular example.

For a given string s determine whether there is a sequence of actions leading to an empty string. In other words, Casimir's goal is to erase all letters from the string. Is there a way to do this?

Input:
The first line contains an integer t (1≤t≤1000) — the number of test cases.

Each test case is described by one string s, for which you need to determine if it can be fully erased by some sequence of turns. The string s consists of capital letters 'A', 'B', 'C' and has a length from 1 to 50 letters, inclusive.

Output:
Print t lines, each line containing the answer to the corresponding test case. The answer to a test case should be YES if there is a way to fully erase the corresponding string and NO otherwise.

You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes, and YES will all be recognized as positive answers).

Example input
6
ABACAB
ABBA
AC
ABC
CABCBB
BCBCBCBCBCBCBCBC

Output:
NO
YES
NO
NO
YES
YES


*/

//  _                     _               ___   ___  _ 
// | | ___ __ _   _ _ __ | |_ ___  _ __  / _ \ / _ \/ |
// | |/ / '__| | | | '_ \| __/ _ \| '_ \| | | | | | | |
// |   <| |  | |_| | |_) | || (_) | | | | |_| | |_| | |
// |_|\_\_|   \__, | .__/ \__\___/|_| |_|\___/ \___/|_|
//            |___/|_|                                 
#include <bits/stdc++.h>
using namespace std;
#define int 			long long int
#define mod 			1000000007
#define fast  			ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi 				vector <int>
#define pii 			pair< int ,int >
#define all(v) 			v.begin(),v.end()
#define PB 				push_back
#define MP 				make_pair
#define ff 				first
#define ss 				second
#define fo(i, a, b) 	for (int i = a; i < b; i++)
#define rfo(i, a, b) 	for (int i = a; i >= b; i--)
#define f(i,container)  for(auto &i:container)
#define endl 			"\n"
#define sz(a) 			(int)a.size()
#ifndef 				ONLINE_JUDGE
#define debug(x) 		cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) 		{cerr << t;}
void _print(string t)	{cerr << t;}
void _print(char t) 	{cerr << t;}
void _print(double t) 	{cerr << t;}
 
template <class T, class V> 	void _print(pair <T, V> p);
template <class T> 		 		void _print(vector <T> v);
template <class T> 		 		void _print(set <T> v);
template <class T, class V> 	void _print(map <T, V> v);
template <class T> 		 		void _print(multiset <T> v);
template <class T, class V> 	void _print(pair <T, V> p) 			{cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> 		 		void _print(vector <T> v) 			{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> 		 		void _print(set <T> v) 				{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> 		 		void _print(multiset <T> v) 		{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> 	void _print(map <T, V> v)			{cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> 	void _print(unordered_map <T, V> v)	{cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
clock_t start;
void excectime()
{
    clock_t end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    #ifndef ONLINE_JUDGE
    cout<<'\n';
    cout<<'\n';
    cout << "Excecuted in "<< fixed << time_taken << setprecision(5);
    cout << " secs " << endl;
    #endif
}
 
 
 
 
signed main()
{
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;	cin>>t;
 
    while(t--)
    {
        string s;   cin>>s;
        int a = 0, b=0, c=0;
        fo(i,0,sz(s))
        {
            if(s[i]=='B')   b++;
            else if (s[i]=='A') a++;
            else c++;
        }
        if(b==a+c)  cout<<"YES\n";
        else    cout<<"NO\n";
    }
 
 
    excectime();
}