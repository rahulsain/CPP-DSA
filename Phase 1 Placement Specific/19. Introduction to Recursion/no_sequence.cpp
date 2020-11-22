#include <bits/stdc++.h>

using namespace std;


void inc(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

void dec(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

int main(){

        int n;
        cin>>n;
        
        inc(n);
        cout<<endl;
        dec(n);
    return 0;
}