#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin,s);

    int ans[26];

    for(int i = 0; i<26; i++)
    ans[i] = 0;

    for(int i = 0; i<s.size(); i++){
        ans[s[i]-'a']++;
    }    

    char answer;
    int maxFreq = -1;

    for(int i = 0; i<26; i++){
        //if we put maxFreq < ans[i] it will provide first char with highest frequency
        //if we put maxFreq <= ans[i] it will provide last char with highest frequency
        if(maxFreq < ans[i]){
            maxFreq = ans[i];
            answer = i + 'a';
        }
    }

    cout<<maxFreq<<" "<<answer<<endl;

    return 0;
}