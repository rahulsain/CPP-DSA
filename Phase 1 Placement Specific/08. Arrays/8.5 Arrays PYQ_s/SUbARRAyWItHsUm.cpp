#include <bits/stdc++.h>

using namespace std;

int main(){

     int n,s;
     cin>>n>>s;

    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    int st= -1 ,en =-1 ,cursum = 0;
    int i,j;
    i = j = 0;

    while(j<n && cursum + a[j]<=s){
        cursum += a[j];
        j++;
    }

    if(cursum == s){
        cout<< i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        cursum += a[j];
        while(cursum > s){
            cursum -= a[i];
            i++;
        }
        if(cursum == s){
        st = i+1;
        en = j+1;
        break;
        }
        j++;
    
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}