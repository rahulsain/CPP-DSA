class Solution {
public:
    bool isPowerOfFour(long num) {
        //https://leetcode.com/problems/power-of-four/
        return ((num-1)&num)==0 && (num-1)%3==0;
    }
};