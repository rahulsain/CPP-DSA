#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    int cur = 0;

    for(int i = 0; i<n; i++){
        cur = 0;
        for(int j = i; j<n; j++){
            cur += a[j];
            cout<<cur<<" ";
        }
        cout<<endl;
    }    

    return 0;
}