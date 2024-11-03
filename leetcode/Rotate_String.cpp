class Solution {
public:
  bool rotateString(string s, string goal) {
    char dummy;
    int n = s.size();
    if (n != goal.size()) {
      return false;
    }
    for (int j = 0; j < s.size(); j++) {
      dummy = s[0];
      for (int i = 0; i < n; i++) {
        s[i] = s[i + 1];
      }
      s[n - 1] = dummy;
      if (s == goal) {
        return true;
      }
    }
    return false;
  }
};
