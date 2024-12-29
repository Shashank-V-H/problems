#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    vector<string> strs;
    string str;
    while (cin >> str) {
      strs.push_back(str);
      if (cin.peek() == '\n') // Check for end of line
        break;
    }

    vector<vector<string>> result = sol.groupAnagrams(strs);

    // Output the result
    for (const auto &group : result) {
      for (const auto &word : group) {
        cout << word << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
