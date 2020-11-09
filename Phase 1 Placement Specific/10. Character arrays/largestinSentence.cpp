#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char a[1000];
    cin.getline(a,n);
    cin.ignore();

    int i = 0;
    int curLen = 0;
    int maxLen = 0;
    int st = 0;
    int maxst = 0;
    while(i < n){
        if(a[i] == ' ' || a[i] == '\0' ){
            if(curLen > maxLen){
                maxst = st;
                maxLen = curLen;
            }
            st = i+1;
            curLen = 0;
        }
        else
        {
            curLen++;
        }

        if(a[i] == '\0')
            break;
        i++;
    }     

    cout<<a<<endl;
    cout<<maxLen<<endl;

    for(int i = 0; i<maxLen; i++){
        cout<<a[maxst+i];
    }
    cout<<endl;
    return 0;
}