#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
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

    vector<int> result = sol.productExceptSelf(nums);

    // Output the result
    for (auto num : result) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
