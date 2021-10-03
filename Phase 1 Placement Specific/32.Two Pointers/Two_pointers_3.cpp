// 611. Valid Triangle Number
// Medium

// 2081

// 133

// Add to List

// Share
// Given an integer array nums, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

 

// Example 1:

// Input: nums = [2,2,3,4]
// Output: 3
// Explanation: Valid combinations are: 
// 2,3,4 (using the first 2)
// 2,3,4 (using the second 2)
// 2,2,3
// Example 2:

// Input: nums = [4,2,3,4]
// Output: 4
 

// Constraints:

// 1 <= nums.length <= 1000
// 0 <= nums[i] <= 1000
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define ll long long 
#define MOD 1000000007
#define MAX 10000000000000002
#define ff first
#define ss second
#define fo(i, a, b) for (int i = a; i < b; i++)
#define rfo(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define  nline "\n"
#define print(x) cout<<x<<nline
#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define sz(a) (int)a.size()
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=sz(nums);
        sort(all(nums));
       int ans=0;
        fo(i,2,n )
        {
            int p1=0,p2=i-1;
            while(p1<p2)
            {
                if(nums[p1]+nums[p2]>nums[i])
                {
                    ans+=(p2-p1);
                    p2-=1;
                }
                else p1+=1;
            }
            
        }
        return ans;
    }
};