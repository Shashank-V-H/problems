
class Solution {
public:
  bool isPowerOfTwo(int n) {
    if (n <= 0)
      return false;

    int i = 1;
    while (i <= n) {
      if (i == n)
        return true;
      if (i > INT_MAX / 2)
        break;
      i *= 2;
    }
    return false;
  }
};
