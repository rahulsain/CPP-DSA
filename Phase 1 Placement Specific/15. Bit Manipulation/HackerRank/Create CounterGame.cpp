#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
string counterGame(long n)
{
   long i,k;
   int c=0;
   while(1)
   {
   for(i=0;;i++)
   {
      k = pow(2,i);
      if(n==k)
        {
            n/=2;
            c=1-c;
            break;
        }
      if(k>n)
        {
            n = n - k/2;
             c=1-c;
             break;
        }
   }
   if(n==1)
    break;
   }
  if(c==1)
    return "Louise";
  else
    return "Richard";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
