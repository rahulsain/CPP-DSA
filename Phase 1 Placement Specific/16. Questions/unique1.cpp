#include <bits/stdc++.h>

using namespace std;

int unique(int a[],int n){
    int tempxor = 0;
    for(int i = 0; i<n; i++){
        tempxor ^= a[i];
    }
    return tempxor;
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    cin>>a[i];


    cout<<unique(a,n)<<endl;
    return 0;
}