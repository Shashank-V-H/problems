
#include <algorithm> // For std::reverse
#include <iostream>
#include <vector>

class Solution {
public:
  void rotate(std::vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is larger than n

    // Reverse the entire array
    std::reverse(nums.begin(), nums.end());
    std::cout << "------------------\n";

    for (int num : nums) {
      std::cout << num << " ";
    }

    std::cout << std::endl;
    // Reverse the first k elements
    std::reverse(nums.begin(), nums.begin() + k);

    std::cout << "------------------\n";

    for (int num : nums) {
      std::cout << num << " ";
    }
    std::cout << std::endl;

    // Reverse the remaining n - k elements
    std::reverse(nums.begin() + k, nums.end());

    std::cout << "------------------\n";

    for (int num : nums) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  Solution solution;

  // Example input
  std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  std::cout << "Original array: ";
  for (int num : nums) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Rotate the array
  solution.rotate(nums, k);

  std::cout << "Rotated array: ";
  for (int num : nums) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
