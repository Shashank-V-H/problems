class Solution {
public:
  bool isPalindrome(int x) {
    string rev = to_string(x);
    reverse(rev.begin(), rev.end());
    if (rev == to_string(x)) {
      return true;
    }
    return false;
  }
};
