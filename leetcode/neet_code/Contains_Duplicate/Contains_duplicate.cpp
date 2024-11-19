// in codeforces format
//
//
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == nums[j]) {
          return true;
        }
      }
    }
    return false;
  }
};

class Solution1 {
public:
  bool containsDuplicate(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == nums[i - 1]) {
        return true;
      }
    }
    return false;
  }
};

class Solution2 {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> seen;
    for (int num : nums) {
      /*if (seen.count(num)) {*/
      /*    return true;*/
      /*}*/
      seen.insert(num);
    }
    for (int num : seen) {
      cout << num << "\t";
      cout << seen.count(num) << endl;
    }
    return false;
  }
};

class Solution3 {
public:
  bool containsDuplicate(vector<int> &nums) {
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
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
