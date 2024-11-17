// in codeforces format
//
//
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i + 1])
        return true;
    }
    return false;
  }
};

class Solution2 {
public:
  bool containsDuplicate(vector<int> &nums) {
    bool flag = false;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == nums[j])
          return true;
      }
    }
    return flag;
  }
};

// Shorted Approach
class Solution3 {
public:
  bool containsDuplicate(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    bool flag = false;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i + 1])
        return true;
    }
    return flag;
  }
};

// Set Approach
class Solution4 {
public:
  bool containsDuplicate(vector<int> &nums) {
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
  }
};

// Map
class Solution5 {
public:
  bool containsDuplicate(vector<int> &nums) {
    map<int, int> mp;
    for (auto i : nums)
      mp[i]++;
    bool flag = false;
    for (auto i : mp) {
      if (i.second >= 2)
        return true;
    }
    return flag;
  }
};

// Hash Map
class Solution6 {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> mp;
    for (auto i : nums)
      mp[i]++;
    bool flag = false;
    for (auto i : mp) {
      if (i.second >= 2)
        return true;
    }
    return flag;
  }
};

int main() {
  int t;
  cin >> t;

  Solution sol;

  while (t--) {
    vector<int> arr;
    int x;

    while (cin >> x) {
      arr.push_back(x);
      if (cin.peek() == '\n')
        break;
    }

    if (sol.containsDuplicate(arr)) {
      cout << "contains duplicates" << endl;
    } else {
      cout << "doesn't contain duplicates" << endl;
    }
  }

  return 0;
}
