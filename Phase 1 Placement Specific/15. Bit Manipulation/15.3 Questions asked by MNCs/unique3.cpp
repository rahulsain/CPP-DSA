#include <bits/stdc++.h>

using namespace std;

bool getBit(int no,int pos){
    return ((no & (1<<pos)) != 0);
}

int setBit(int no, int pos){
    return (no | (1<<pos));
}

int unique(int a[],int n){
    int res = 0;
    for(int i = 0; i<64; i++){
        int sum = 0;
        for(int j = 0; j<n; j++){
            if(getBit(a[j],i)){
                sum++;
            }
        }
        if(sum % 3 != 0){
            res = setBit(res,i);
        }
    }
    return res;
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