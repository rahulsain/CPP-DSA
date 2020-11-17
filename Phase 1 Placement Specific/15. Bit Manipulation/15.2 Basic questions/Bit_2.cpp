#include <bits/stdc++.h>

using namespace std;

int powerOf2(int n){
    return (n && !(n & n-1));
}

int count1(int n){
    int i = 0;
    while(n){
        n &= n-1;
        i++;
    }
    return i;
}

void subset(int a[],int n){
    for(int i = 0; i < (1<<n); i++){
        for(int j = 0; j<n; j++){
            if(i & (1<<j)){
                cout<<a[j] << " ";
            }
        }
        cout<<endl;
    }
}

int main(){

    int n;
    
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++)
    cin>>a[i];

    cout<<"Power of 2 -> "<<powerOf2(n)<<endl;
    cout<<"Count set bits -> "<<count1(n)<<endl;
    cout<<"Subsets ->"<<endl;  
    subset(a,n);      

    return 0;
}