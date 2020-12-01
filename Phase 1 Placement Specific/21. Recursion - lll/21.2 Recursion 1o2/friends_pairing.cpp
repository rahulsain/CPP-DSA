#include <bits/stdc++.h>

using namespace std;

int friends(int n){
    if(n == 0 || n == 1 || n == 2)
        return n;
    return (n-1)*friends(n-2) + friends(n-1);
}

int main(){

    int n;
    cin>>n;
    cout<<friends(n);

    return 0;
}