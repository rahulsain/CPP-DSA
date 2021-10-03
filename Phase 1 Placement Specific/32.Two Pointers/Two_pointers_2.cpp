// 557. Reverse Words in a String III
// Easy

// 1846

// 119

// Add to List

// Share
// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "God Ding"
// Output: "doG gniD"
 

// Constraints:

// 1 <= s.length <= 5 * 104
// s contains printable ASCII characters.
// s does not contain any leading or trailing spaces.
// There is at least one word in s.
// All the words in s are separated by a single space.
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
    string reverseWords(string s) {
              int i = 0;
        for (int j = 0; j<sz(s); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
          
        }
          reverse(s.begin()+i,s.end());
        return s;
    }
};