// Date: 18th November 2024

#include <bits/stdc++.h>
using namespace std;

// Sorting
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

// Hash Table
class Solution1 {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;
    for (int i = 0; i < s.length(); i++) {
      countS[s[i]]++;
      countT[t[i]]++;
    }
    return countS == countT;
  }
};

// Hash Table (Optimal)
class Solution2 {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }

    vector<int> count(26, 0);
    for (int i = 0; i < s.length(); i++) {
      count[s[i] - 'a']++;
      count[t[i] - 'a']--;
    }

    for (int val : count) {
      if (val != 0) {
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
  /*Solution1 sol;*/
  /*Solution2 sol;*/

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
