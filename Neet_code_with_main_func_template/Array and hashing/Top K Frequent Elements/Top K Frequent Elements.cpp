#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
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
    int x, k;
    while (cin >> x) {
      nums.push_back(x);
      if (cin.peek() == '\n') // Check for end of line
        break;
    }
    cin >> k;

    vector<int> result = sol.topKFrequent(nums, k);

    // Output the result
    for (auto num : result) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
