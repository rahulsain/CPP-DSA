#include <bits/stdc++.h>

using namespace std;

int knapsack(int val[],int wt[],int n,int w){
    if(n == 0 || w == 0)
        return 0;
    if(w - wt[n-1] < 0){
        return 0;
    }
    return max(knapsack(val,wt,n-1,w-wt[n-1]) + val[n-1],knapsack(val,wt,n-1,w));
}

int main(){

    int val[] = {100,150,150,10000};
    int wt[] = {10,20,30,50};
    int w = 50;
    cout<<knapsack(val,wt,4,w);

    return 0;
}