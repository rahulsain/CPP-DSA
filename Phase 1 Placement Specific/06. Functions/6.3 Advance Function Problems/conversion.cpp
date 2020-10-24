#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string s){
    int ans = 0;
    int x = 1;
    int n = s.size();

    for(int i = n-1; i>=0; i--){
        if(s[i] >= '0' && s[i] <= '9')
            ans += x*(s[i] - '0');
        else if(s[i] >= 'A' && s[i] <= 'F')
            ans += x*(s[i] - 'A');
        else if(s[i] >= 'a' && s[i] <= 'f')
            ans += x*(s[i] - 'a');

        x *= 16;
    }

    return ans;
}

int decimaltoBinary(int n){
    int ans = 0;
    int x = 1;

    while(x <= n)
            x *= 2;

        x /= 2;

        while (x>0)
        {
            int lastDigit = n/x;
            n -= lastDigit*x;
            x /= 2;
            ans = ans*10 + lastDigit;
        }
        
    return ans;
}

int decimaltoOctal(int n){
    int ans = 0;
    int x = 1;

    while(x <= n)
            x *= 8;

        x /= 8;

        while (x>0)
        {
            int lastDigit = n/x;
            n -= lastDigit*x;
            x /= 8;
            ans = ans*10 + lastDigit;
        }
        
    return ans;
}

string decimaltoHexadecimal(int n){
    int x = 1;
    string ans = "";

    while(x <= n){
        x *= 16;
    }
    x /= 16;

    while(x > 0){
        int lastDigit = n/x;
         n -= lastDigit*x;
            x /= 16;

            if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
            else{
                char c = 'A' + lastDigit - 10;
                ans.push_back(c);
            }
    }
    return ans;
}

int main(){

    int n;
    
    printf("Enter number\n");
    cin>>n;

    cout<<decimaltoHexadecimal(n)<<endl;

    return 0;
}