#include <bits/stdc++.h>

using namespace std;

void rev(string s){
    if(s.length() == 0){
        return;
    }
    
    rev(s.substr(1));
    cout<<s[0];
    
}

int main(){
    rev("binodOP");
    return 0;
}