#include <bits/stdc++.h>

using namespace std;

string rem(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = rem(s.substr(1));
    if(ans[0] == ch){
        return ans;
    }    
    return ch+ans;
}

int main(){
    cout<<rem("aaabbbbddddccceeeddddd");
    return 0;
}