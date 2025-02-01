// first approach 
//
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
		if(nums.size() == 0 || nums.size() == 1){
			return true;
		}
		vector<pair<int, int>> pairs;
		for(int i = 0; i < nums.size() - 1; i++){
			pairs.push_back(make_pair(nums[i], nums[i+1]));
		}
		for(auto p : pairs){
			if(p.first % 2 == 0 && p.second % 2 == 0){
				return false;
			}
			else if(p.first % 2 == 1 && p.second % 2 == 1){
				return false;
			}
		}
        
		return true;
    }
};
