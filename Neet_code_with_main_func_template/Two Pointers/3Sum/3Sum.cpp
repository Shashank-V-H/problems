#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    vector<int> nums;
    int x;
    while (cin >> x) {
      nums.push_back(x);
      if (cin.peek() == '\n') // Check for end of line
        break;
    }

    vector<vector<int>> result = sol.threeSum(nums);

    // Output the result
    for (const auto &triplet : result) {
      for (auto num : triplet) {
        cout << num << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
