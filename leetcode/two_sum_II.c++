
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int n = numbers.size();
    vector<int> ans;
    int sol, left = 0, right = numbers.size() - 1;
    while (left != right) {
      sol = numbers[left] + numbers[right];
      if (sol == target) {
        return {left + 1, right + 1};
      } else if (sol < target) {
        left++;
      } else
        right--;
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
