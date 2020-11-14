#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin,s);

    char ans[s.size()];
    int count = 1;
    ans[0] = s[0];

    for(int i =1; i<s.size(); i++){
        if(s[i] != s[i-1]){
            ans[count++] = s[i];
            
        }
    }        

    for(int i = 0; i<count; i++)
    cout<<ans[i];
    
    return 0;
}