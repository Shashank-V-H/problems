#include <string>
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty()) {
      return "";
    }

    string ans;
    int x = 0;

    while (true) {
      if (x >= strs[0].size())
        break;
      char firstChar = strs[0][x];

      for (int i = 1; i < strs.size(); ++i) {
        if (x >= strs[i].size() || strs[i][x] != firstChar) {
          return ans;
        }
      }

      ans += firstChar;
      ++x;
    }

    return ans;
  }
};
