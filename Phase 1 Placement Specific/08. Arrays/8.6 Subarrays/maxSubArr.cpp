#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;        
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    int as[n+1];
    as[0] = 0;
    int maxSum = INT_MIN;

    for(int i = 1; i<=n; i++){
        as[i] = as[i-1] + a[i-1];
    }

    for(int i = 1; i<=n; i++){
        int sum = 0;
        maxSum = max(maxSum,as[i]);
        for(int j = 1; j<i; j++){
            sum = as[i] - as[j-1];
            maxSum = max(maxSum, sum);
        }
    }

    cout<<maxSum;
    return 0;
}