#include <bits/stdc++.h>

using namespace std;

bool PairSum(int a[],int n,int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(a[low] + a[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low] + a[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
} 

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    PairSum(a,n,k);    

    return 0;
}