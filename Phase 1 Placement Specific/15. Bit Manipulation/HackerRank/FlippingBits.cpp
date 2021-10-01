#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Complete the flippingBits function below.
long long BitFlip(long long n) 
{
    long long a[32];
    for(int j=31;j>=0;j--){
        a[j] = 1 - (n%2);
          n/=2;
    }
    long long sum = 0;
    for(int j=0;j<32;j++){
         sum = sum + a[31-j]*pow(2,j);
     }
     return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long long q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = BitFlip(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
