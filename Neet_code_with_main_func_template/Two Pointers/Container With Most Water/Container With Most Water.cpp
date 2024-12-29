#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  int maxArea(vector<int> &height) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    vector<int> height;
    int x;
    while (cin >> x) {
      height.push_back(x);
      if (cin.peek() == '\n') // Check for end of line
        break;
    }

    int result = sol.maxArea(height);

    // Output the result
    cout << result << endl;
  }

  return 0;
}
