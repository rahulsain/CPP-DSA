#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin,s);

    //uppercase
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }    
    cout<<s<<endl;

    //lowercase
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }    
    cout<<s<<endl;

    //using transform function
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}