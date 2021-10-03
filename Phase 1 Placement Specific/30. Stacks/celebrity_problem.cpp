/*
In a party of N people, only one person is known to everyone. Such a person may be present in the party, if yes, (s)he doesn’t know anyone in the party. We can only ask questions like “does A know B? “. Find the stranger (celebrity) in the minimum number of questions.
We can describe the problem input as an array of numbers/characters representing persons in the party. We also have a hypothetical function HaveAcquaintance(A, B) which returns true if A knows B, false otherwise. How can we solve the problem. 

Examples:  

Input:
MATRIX = { {0, 0, 1, 0},
           {0, 0, 1, 0},
           {0, 0, 0, 0},
           {0, 0, 1, 0} }
Output:id = 2
Explanation: The person with ID 2 does not 
know anyone but everyone knows him

Input:
MATRIX = { {0, 0, 1, 0},
           {0, 0, 1, 0},
           {0, 1, 0, 0},
           {0, 0, 1, 0} }
Output: No celebrity
Explanation: There is no celebrity.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n; cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            cin>>a[i][j];
    stack<ll> s;
    for(ll i=0;i<n;i++)
        s.push(i);
    while(s.size()>=2)
    {
        ll n1=s.top();
        s.pop();
        ll n2=s.top();
        s.pop();
        if(a[n1][n2]==1)
            s.push(n2);
        else
            s.push(n1);
    }
    ll celeb=s.top();
    for(ll i=0;i<n;i++)
    {
        if(i!=celeb)
        {
            if(a[i][celeb]==0 || a[celeb][i]==1)
            {
                cout<<"No celebrity\n";
                return 0;
            }
        }
    }
    cout<<"Celebrity ID : "<<celeb<<endl;
    return 0;
}