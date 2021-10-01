#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the sumXor function below.
long long xorsum(long long n)
{
long long ans = 0;
while(n)
{
     ans += n%2?0:1;
     n/=2; 
}
ans=pow(2,ans);
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    long long n = stol(ltrim(rtrim(n_temp)));

    long result = xorsum(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;//returning s
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;//returning s
}
