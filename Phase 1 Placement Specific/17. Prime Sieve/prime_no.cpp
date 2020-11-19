#include <bits/stdc++.h>

using namespace std;

void primeSieve(int n){
    int flag[n+1] = {0};
    for(int i = 2; i<=n; i++){
        if(flag[i] == 0){
            for(int j = i*i; j<=n; j+=i){
                flag[j] = 1;
            }
        }
    }

    for(int j = 2; j<=n; j++){
                if(flag[j] == 0)
                    cout<<j<<" ";
            }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    primeSieve(n);        

    return 0;
}