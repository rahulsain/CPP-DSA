#include <bits/stdc++.h>

using namespace std;

int kadane(int a[],int n){
    int maxSum = INT_MIN;
    int curSum = 0;

    for(int i = 0; i<n; i++){
        curSum += a[i];
        if(curSum < 0)
            curSum = 0;
        maxSum = max(maxSum,curSum);
    }   
    return maxSum;
}
int main(){
    int n;
    cin>>n;        
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    int wrapSum,nonwrapSum = kadane(a,n);
    int totalSum = 0;
    for(int i =0; i<n; i++){
        totalSum += a[i];
        a[i] = - a[i];
    }
    wrapSum = totalSum + kadane(a,n);

    cout<<max(wrapSum,nonwrapSum);

    return 0;
}