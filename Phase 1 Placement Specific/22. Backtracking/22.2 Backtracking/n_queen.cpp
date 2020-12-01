#include <bits/stdc++.h>

using namespace std;

bool isSafe(int** a,int r,int c,int n){
    for(int i = 0; i<r; i++){
        if(a[i][c] == 1){
            return false;
        }
    }
    int i = r;
    int j = c;
    while(i>=0 && j>= 0){
        if(a[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    i = r;
    j = c;
    while(i>=0 && j< n){
        if(a[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool nQueen(int** a,int r,int n){
    if(r >= n){
        return true;
    }
    for(int c = 0; c<n; c++){
        if(isSafe(a,r,c,n)){
            a[r][c] = 1;

            if(nQueen(a,r + 1,n)){
                return true;
            }
            a[r][c] = 0; //backtracking
        }
    }
    return false;
}

int main(){
    int n; cin>>n;
    int ** a = new int*[n];        
    for(int i = 0; i<n; i++){
        a[i] = new int[n];
        for(int j = 0; j<n; j++){
            a[i][j] = 0;
        }
    }
    if(nQueen(a,0,n)){
       for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" ";
            }
        cout<<endl;
        } 
    }
    return 0;
}