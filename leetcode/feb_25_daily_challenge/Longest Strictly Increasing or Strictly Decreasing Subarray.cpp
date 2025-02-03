// First approach 

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 1; 
        
        int longest = 1, inc_len = 1, dec_len = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) { 
                inc_len++;
                dec_len = 1; 
            } 
            else if (nums[i] < nums[i - 1]) { 
                dec_len++;
                inc_len = 1; 
            } 
            else { 
                inc_len = 1;
                dec_len = 1;
            }

            longest = max(longest, max(inc_len, dec_len));
        }

        return longest;
    }
};
