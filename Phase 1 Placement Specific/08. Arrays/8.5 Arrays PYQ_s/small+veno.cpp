#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    const int N = 10e4;
    bool check[N];

    for(int i = 0; i<N; i++)
        check[i] = false;

    for(int i = 0; i<n; i++){
        if(a[i]>=0){
            check[a[i]] = true;
        }
    }

    int ans = -1;

    for(int i = 1; i<N; i++){
        if(!(check[i])){
            ans = i;
            break;
        }
    }

    cout<<ans;

    return 0;
}