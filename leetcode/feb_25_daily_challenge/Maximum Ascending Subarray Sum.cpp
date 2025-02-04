
// failed attempt 

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
		if(nums.size() == 1){
			return nums[0];
		}
		int sum = 0, max = 0, n = nums.size();
		for(int i = 1; i < n; i++){
			if(nums[i - 1] < nums[i]){
				sum += nums[i - 1];
				if(i == n - 1){
					if(nums[n-2] < nums[n - 1]){
						sum += nums[n-1];
						return sum;
					}
				}
			}
			else{
				sum += nums[i - 1];
				if(max < sum){
					max = sum; 
				}
				sum = 0;
			}
		}
		return max;
    }
};


// 2nd attempt
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];  
        int currSum = nums[0]; 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                currSum += nums[i];  
            } else {
                maxSum = max(maxSum, currSum); 
                currSum = nums[i];  
            }
        }

        return max(maxSum, currSum); 
    }
};
