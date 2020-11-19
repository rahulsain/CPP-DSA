#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
    //better approach using recursion
    //easy to remember
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;
}