/*
A forest is an undirected graph without cycles (not necessarily connected).

Mocha and Diana are friends in Zhijiang, both of them have a forest with nodes numbered from 1 to n, and they would like to add edges to their forests such that:

After adding edges, both of their graphs are still forests.
They add the same edges. That is, if an edge (u,v) is added to Mocha's forest, then an edge (u,v) is added to Diana's forest, and vice versa.
Mocha and Diana want to know the maximum number of edges they can add, and which edges to add.

Input
The first line contains three integers n, m1 and m2 (1≤n≤1000, 0≤m1,m2<n) — the number of nodes and the number of initial edges in Mocha's forest and Diana's forest.

Each of the next m1 lines contains two integers u and v (1≤u,v≤n, u≠v) — the edges in Mocha's forest.

Each of the next m2 lines contains two integers u and v (1≤u,v≤n, u≠v) — the edges in Diana's forest.

Output
The first line contains only one integer h, the maximum number of edges Mocha and Diana can add (in each forest).

Each of the next h lines contains two integers u and v (1≤u,v≤n, u≠v) — the edge you add each time.

If there are multiple correct answers, you can print any one of them.
*/
#include<bits/stdc++.h>
using namespace std;


// ************************************************************************************************************************************************************************
//#include<ext/pb_ds/assoc_container.hpp>                                                                     
//#include<ext/pb_ds/tree_policy.hpp>                                                                         
//#include<ext/pb_ds/trie_policy.hpp>                                                                         
//using namespace __gnu_pbds;                                                                                 
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;                   
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
//typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> Trie; 
// ************************************************************************************************************************************************************************


#define fo(i,n)               for(int i=0;i<n;i++)
#define rfo(i,n)              for(int i=n-1;i>=0;i--)
#define fo1(i,n)              for(int i=1;i<=n;i++)
#define rfo1(i,n)             for(int i=n;i>0;i--)
#define pii                   pair<int,int>
#define fast                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v)                v.begin(),v.end()
#define vi                    vector<int> 
#define mii                   map<int,int>
#define mivi                  map<int,vector<int>>
#define int                   long long
#define tc                    int testcases;cin>>testcases;while(testcases--){Prakhar_Best();}
#define setbits(x)            __builtin_popcountll(x)
#define zerobits(x)           __builtin_ctzll(x)
#define fill(x,y)             memset(x,y,sizeof(x))
#define f(i,container)        for(auto &i:container)
#define vs                    vector<string>
#define pb                    push_back
#define ff                    first
#define ss                    second
#define tcgoogle              int testcases;cin>>testcases;fo1(t,testcases){cout << "Case #" << t << ": ";Prakhar_Best();}
#define mod                   1000000007




class DSU {
    public:
        vector<int> parent, _size;
 
        DSU(int n);
        void join_sets(int a, int b);
        int get_root(int a);
        bool same_set(int a, int b);
};
 
bool DSU::same_set(int a, int b) { return get_root(a) == get_root(b); }
 
DSU::DSU(int n)
{
        parent.resize(n + 1);
        _size.resize(n + 1, 1);
        for (int i = 1; i <= n; i++)
                parent[i] = i;
}
 
void DSU::join_sets(int a, int b)
{
        a = get_root(a);
        b = get_root(b);
 
        if (_size[a] > _size[b])
                swap(a, b);
 
        if (a != b) {
                parent[a] = b;
                _size[b] += _size[a];
        }
}
 
int DSU::get_root(int a)
{
        if (a != parent[a])
                parent[a] = get_root(parent[a]);
        return parent[a];
}

clock_t start;
void file_io_()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
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
// ************************************************************************************************************************************************************************


void Prakhar_Best()
{

    int n,m,k;
    cin>>n>>m>>k;
    DSU d1(n),d2(n);
    fo(i,m)
    {
        int a;
        int b;
        cin>>a>>b;
        d1.join_sets(a,b);
    }
    fo(i,k)
    {
        int a;
        int b;
        cin>>a>>b;
        d2.join_sets(a,b);
    }
    vector<pii>v;
    fo1(i,n)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(!d1.same_set(i,j) && !d2.same_set(i,j))
            {
                d1.join_sets(i,j);
                d2.join_sets(i,j);
                v.pb({i,j});
            }

        }
    }
    cout<<v.size()<<"\n";
    f(i,v) cout<<i.ff<<" "<<i.ss<<"\n";

}


signed main()
{
    fast
    start=clock();
    file_io_();

    Prakhar_Best();

    excectime();
    return 0;
}