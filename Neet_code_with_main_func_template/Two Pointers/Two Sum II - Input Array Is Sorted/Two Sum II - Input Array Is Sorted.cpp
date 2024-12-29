#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    vector<int> numbers;
    int x, target;
    while (cin >> x) {
      numbers.push_back(x);
      if (cin.peek() == '\n') // Check for end of line
        break;
    }
    cin >> target;

    vector<int> result = sol.twoSum(numbers, target);

    // Output the result
    for (auto num : result) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
