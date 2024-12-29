#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    bool result = sol.isPalindrome(s);

    // Output the result (1 for true, 0 for false)
    cout << result << endl;
  }

  return 0;
}
