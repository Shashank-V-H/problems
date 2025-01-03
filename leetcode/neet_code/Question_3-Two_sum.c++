#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        if (nums[i] + nums[j] == target) {
          ans = {i, j};
          break;
        }
      }
    }
    return ans;
  }
};

int main() {
  Solution solution;

  // Example input
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  cout << "target: " << target << endl;
  for (int num : nums) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  vector<int> ans = solution.twoSum(nums, target);

  std::cout << "array index that gives target value: ";
  for (int num : ans) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
