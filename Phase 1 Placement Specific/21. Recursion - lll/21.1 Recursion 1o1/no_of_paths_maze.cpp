#include <bits/stdc++.h>

using namespace std;

int path(int n,int r,int c){
    if(n < r || n < c){
        return 0;
    }
    if(n == r && n == c){
        return 1;
    }
    int count = 0;
    count += path(n,r+1,c) + path(n,r,c+1);

    return count;
}

int main(){

    int n;
    cin>>n;
    cout<<path(n-1,0,0);

    return 0;
}
