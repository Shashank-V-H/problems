

#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

void print(vector<int> &ans);

class Solution {
public:
  int twoSum(vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }
    int max = 0, count = 0;
    sort(nums.begin(), nums.end());
    auto it = std::unique(nums.begin(), nums.end());

    nums.resize(std::distance(nums.begin(), it));

    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i + 1] == nums[i] + 1) {
        count++;
        if (count > max) {
          max = count;
        }
      } else {
        count = 0;
      }
    }
    return max + 1;
  }
};

void print(vector<int> &ans) {
  std::cout << "array: ";
  for (int num : ans) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

int main() {
  Solution solution;

  // Example input
  std::vector<int> nums = {1, 2, 3, 4};
  std::vector<int> nums1 = {1, 0, 0, 15};
  std::vector<int> nums2 = {};

  /*print(nums2);*/

  print(nums);
  int ans = solution.twoSum(nums);
  cout << ans << endl;

  print(nums1);
  int ans1 = solution.twoSum(nums1);
  cout << ans1 << endl;

  print(nums2);
  int ans2 = solution.twoSum(nums2);
  cout << ans2 << endl;

  return 0;
}
