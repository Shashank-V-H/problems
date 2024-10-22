
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    // Check rows, columns, and grids
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        // Skip empty cells
        if (board[i][j] == '.')
          continue;

        // Check the current row
        for (int k = j + 1; k < 9; k++) {
          if (board[i][j] == board[i][k])
            return false;
        }

        // Check the current column
        for (int k = i + 1; k < 9; k++) {
          if (board[i][j] == board[k][j])
            return false;
        }

        // Check the 3x3 subgrid
        int gridRow = (i / 3) * 3;
        int gridCol = (j / 3) * 3;
        for (int x = gridRow; x < gridRow + 3; x++) {
          for (int y = gridCol; y < gridCol + 3; y++) {
            if ((x != i || y != j) && board[i][j] == board[x][y]) {
              return false;
            }
          }
        }
      }
    }
    return true;
  }
};

int main() {
  Solution solution;

  // Example Sudoku board
  vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  // Check if the board is valid
  if (solution.isValidSudoku(board)) {
    cout << "The Sudoku board is valid." << endl;
  } else {
    cout << "The Sudoku board is not valid." << endl;
  }

  return 0;
}
