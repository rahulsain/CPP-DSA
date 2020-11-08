#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,key;
    cin>>n>>m>>key;

    int a[n][m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }

    bool found = 0;
    int r = 0,c = m-1;
    //there is error in the video regarding c being n-1 and r<m which leads to error
    while(c >= 0 && r < n){
            if(a[r][c] == key){
                found = 1;
            }
            (a[r][c] > key) ? c-- : r++;
        }
    if(found)
        cout<<found;
    else
        cout<<found;

        

    return 0;
}