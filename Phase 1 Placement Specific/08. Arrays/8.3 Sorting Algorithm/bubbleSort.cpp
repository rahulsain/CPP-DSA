#include <bits/stdc++.h>


using namespace std;

int main(){

    int a[] = {4,7,46,-1,49,98,24,84,-4};
    int n = *(&a + 1) - a;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j + 1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int k : a){
        cout<<k<<" ";
    }

    return 0;
}