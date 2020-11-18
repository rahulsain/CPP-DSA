#include <bits/stdc++.h>

using namespace std;

bool getBit(int no, int pos){
    return ((no &  (1<<pos)) != 0);
}

void unique(int a[],int n){
    int tempxor = 0;
    for(int i = 0; i<n; i++){
        tempxor ^= a[i];
    }
    int temp = tempxor;
    int pos = 0;
    int setBit = 0;
    while(setBit != 1){
        setBit = temp & 1;
        pos++;
        temp = temp >>1;
    }
    int newxor = 0;
    for(int i = 0; i<n; i++){
        if(getBit(a[i],pos-1)){
            newxor ^= a[i];
        }
    }
    cout<<newxor<<" "<<(newxor^tempxor)<<endl;
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    cin>>a[i];

    unique(a,n);

    return 0;
}