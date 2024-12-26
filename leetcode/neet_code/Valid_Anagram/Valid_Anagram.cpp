// Date: 18th November 2024

#include <bits/stdc++.h>
using namespace std;

// Simple approach
class Solution {
public:
  bool isAnagram(string s, string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    if (s == t) {
      return true;
    } else {
      return false;
    }
    return false;
  }
};

// Simple approach
class Solution1 {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }
    unordered_map<char, int> charCount;
    for (char c : s) {
      charCount[c]++;
    }
    for (char c : t) {
      charCount[c]--;
      if (charCount[c] < 0) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  int t;
  cin >> t;

  Solution sol;

  while (t--) {
    string str1, str2;
    cin >> str1 >> str2;

    if (sol.isAnagram(str1, str2)) {
      cout << "is Anagram" << endl;
    } else {
      cout << "not anagram" << endl;
    }
  }

  return 0;
}
