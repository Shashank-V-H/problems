#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
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

    int result = sol.longestConsecutive(nums);

    // Output the result
    cout << result << endl;
  }

  return 0;
}
