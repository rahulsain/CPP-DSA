// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [1,1]
// Output: 1
// Example 4:

// Input: nums = [1,1,2]
// Output: 1
 

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for precisely one integer which appears two or more times.
 

// Follow up:

// How can we prove that at least one duplicate number must exist in nums?
// Can you solve the problem in linear runtime complexity?

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
    int findDuplicate(vector<int>& nums) {
        int n=sz(nums);
        int ar[n+1];
        memset(ar,0,sizeof(ar));
        fo(i,0,n)
        {
            ar[nums[i]]++;
            if(ar[nums[i]]>1) return nums[i];
        }
        return -1;
        
    }
};