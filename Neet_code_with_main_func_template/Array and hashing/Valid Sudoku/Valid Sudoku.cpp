#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    // Your code here
  }
};

int main() {
  Solution sol;
  // repetitive task
  int t;
  cin >> t;
  while (t--) {
    vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j < 9; ++j) {
        cin >> board[i][j];
      }
    }

    bool result = sol.isValidSudoku(board);

    // Output the result (1 for true, 0 for false)
    cout << result << endl;
  }

  return 0;
}
