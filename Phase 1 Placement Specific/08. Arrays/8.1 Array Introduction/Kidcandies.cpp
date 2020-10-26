class Solution {
    //leetcode solution of https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
public:
    using VB = vector<bool>;
    using VI = vector<int>;
    VB kidsWithCandies(VI& A, int K, VB ans = {}) {
        int max = *max_element(A.begin(), A.end());
        transform(A.begin(), A.end(), back_inserter(ans), [=](auto x) { return max <= x + K; });
        return ans;
    }
};