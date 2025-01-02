#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> track;
    for (auto num : nums) {
      track[num]++;
    }
    vector<pair<int, int>> decreasing_frequency;
    for (const auto &t : track) {
      decreasing_frequency.push_back({t.second, t.first});
    }
    vector<int> result;
    sort(decreasing_frequency.rbegin(), decreasing_frequency.rend());
    for (int i = 0; i < k; i++) {
      result.push_back(decreasing_frequency[i].second);
    }
    return result;
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
