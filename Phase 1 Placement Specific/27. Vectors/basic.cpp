#include <bits/stdc++.h>
#include <numeric>

using namespace std;

bool myCompare(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}

int main()
{

    vector<string> c;

    c.push_back("corona");
    c.push_back("virus");
    c.push_back("hello");
    c.push_back("i like your cut g");

    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";

    cout << endl;

    vector<string>::iterator it;
    for (it = c.begin(); it != c.end(); it++)
        cout << *it << " ";

    cout << endl;

    // sort(c.begin(), c.end(),myCompare);

    

    vector<vector<int>> grid1(4, vector<int>(3, -1));
    vector<vector<int>> grid2(4, vector<int>(3, 1));
    grid1.swap(grid2);

    for (auto i : grid1)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
    }
    for (auto i : grid2)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
    }
    // int sum = accumulate(c.begin(), c.end(), 0);
    string mx = *max_element(c.begin(),c.end());
    string mn = *min_element(c.begin(),c.end());
    cout << mx<<endl<<mn<<endl;
    partial_sum(c.begin(),c.end(),c.begin());
    for (auto i : c)
    {
        cout << i << endl;
    }
    int a[] = {10,20,30,40,50,70,29,49,3};
    vector<pair<int,int>> v;

   for(int  i =0; i<(sizeof(a)/sizeof(a[0])); i++){
       v.push_back(make_pair(a[i],i));
   }

    sort(v.begin(), v.end(),myCompare);
    for (int i = 0; i<v.size(); i++)
    {
        a[v[i].second] = i;
    }

    for (int i = 0; i<v.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;

    return 0;
}