

#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

void print(vector<int> &ans);

class Solution {
public:
  vector<int> twoSum(vector<int> &nums) {
    vector<int> answer;
    vector<int> sol;
    vector<int> zero_track;
    int product = 1;
    int zero_exist = 0;
    int array_full_zero = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        array_full_zero++;
      }
    }

    if (nums.size() == 2) {
      if (array_full_zero == 2)
        return nums;
      else {
        reverse(nums.begin(), nums.end());
        return nums;
      }
    } else if (array_full_zero >= nums.size() / 2) {
      for (int i = 0; i < nums.size(); i++)
        answer.emplace_back(0);
      return answer;
    }

    // to calculate the product
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        // goto (we'll come to goto condition later)
        continue;
      }
      product *= nums[i];
    }
    cout << "-------------" << product << endl;

    // zero_exist or not
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        zero_exist = 1;
        break;
      }
    }

    if (zero_exist) {
      int j = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
          zero_track.emplace_back(i);
        }
      }

      for (int i = 0; i < nums.size(); i++) {
        answer.emplace_back(0);
      }

      for (int i = 0; i < zero_track.size(); i++) {
        answer[zero_track[i]] = product;
      }

    } else {

      for (int i = 0; i < nums.size(); i++) {
        sol.emplace_back(product / nums[i]);
      }
      return sol;
    }

    return answer;
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
  std::vector<int> nums = {2, 7, 11, 15};
  std::vector<int> nums1 = {2, 0, 11, 15};
  std::vector<int> nums2 = {0, 4, 0};
  std::vector<int> nums3 = {1, 0};

  print(nums2);

  vector<int> ans = solution.twoSum(nums);
  print(ans);
  cout << endl;

  vector<int> ans1 = solution.twoSum(nums1);
  print(ans1);
  cout << endl;

  vector<int> ans2 = solution.twoSum(nums2);
  print(ans2);
  cout << endl;

  vector<int> ans3 = solution.twoSum(nums3);
  print(ans3);
  cout << endl;
  return 0;
}
