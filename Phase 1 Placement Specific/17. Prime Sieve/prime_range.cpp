class Solution {
    //https://leetcode.com/problems/count-primes/
public:
    int countPrimes(int n) {

        //its easy to change code for given range from m to n by replacing 2 by m
        if(n<2)
            return 0;
        
        
        bool flag[n+1];
        for(int i = 0; i<=n; i++){
            flag[i] = 0;
        }
        for(long i = 2; i<=n; i++){
            if(flag[i] == 0){
                for(long j = i*i; j<=n; j+=i){
                    flag[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i = 2; i<n; i++){
            if(flag[i] == 0){
                count++;
            }
        }
        return count;
    }
};