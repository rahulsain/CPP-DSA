#include <bits/stdc++.h>

using namespace std;

int path(int n,int e){
    if(n == e){
        return 1;
    }
    if(e < n){
        return 0;
    }
    int count = 0;
    for(int i = 1; i<=6; i++){
    count += path(n+i,e);}

    return count;
}

int main(){

    int n;
    cin>>n;
    cout<<path(0,n-1);

    return 0;
}
