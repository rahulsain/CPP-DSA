#include <bits/stdc++.h>

using namespace std;

void swap(int a[],int c,int b){
    int temp = a[c];
    a[c] = a[b];
    a[b] = temp;
}

void dnfSort(int a[],int n){
    int l = 0;
    int m = 0;
    int h = n-1;

    while(m<=h){
        if(a[m] == 0){
            swap(a,l,m);
            l++; m++;
        }
        else if(a[m] == 2){
            swap(a,h,m);
            h--;
        }
        else{
            m++;
        }
    }
}

int main(){

    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    dnfSort(a,n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}