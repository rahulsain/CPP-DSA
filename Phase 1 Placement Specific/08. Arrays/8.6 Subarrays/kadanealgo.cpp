#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;        
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    int maxSum = INT_MIN;
    int curSum = 0;

    for(int i = 0; i<n; i++){
        curSum += a[i];
        if(curSum < 0)
            curSum = 0;
        maxSum = max(maxSum,curSum);
    }    
    cout<<maxSum;
    return 0;
}