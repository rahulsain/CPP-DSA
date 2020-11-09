#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    char a[n+1];
    cin>>a;
    bool found = 1;
    int i = 0;
    while(i<n){
        if(a[i] != a[n-1-i]){
            found = 0;
            break;
        }
        i++;
    } 
    if(found){
        cout<<"palindrome";
    }   
    else
    {
        cout<<"not a palindrome";
    }
    

    return 0;
}