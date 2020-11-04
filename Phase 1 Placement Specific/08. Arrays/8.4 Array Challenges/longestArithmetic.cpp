#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i = 0; i<n; i++)
        cin>>a[i];

    int cur,maxx,ap = a[1] - a[0];
    cur=maxx=2;


    for(int i = 1; i<n-1; i++)
    {
        if(ap == a[i+1] - a[i]){
            cur++;
        }
        else{
            ap = a[i+1] - a[i];
            cur = 2;
        }
        maxx = max(maxx,cur);
    }

    cout<<maxx<<endl;
    return 0;
}