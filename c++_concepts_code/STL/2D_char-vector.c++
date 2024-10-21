
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Initialize a 2D vector of characters
  /*vector<vector<char>> charGrid = {*/
  /*    {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}};*/

  /*vector<vector<char>> charGrid = {*/
  /*    {'8', '3', '.', '.', '7', '.', '.', '.', '.'},*/
  /*    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},*/
  /*    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},*/
  /*    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},*/
  /*    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},*/
  /*    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},*/
  /*    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},*/
  /*    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},*/
  /*    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};*/

  vector<vector<char>> charGrid = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  cout << "computation started\n";
  int not_valid = false;
  int x = 0, y = 0;
  int n = 0, m = 0;
  // Display the 2D vector
  for (int i = 0; i < charGrid.size(); i++) {
    cout << i << endl;
    for (int j = 1; j < charGrid.size(); j++) {
      if (charGrid[i][j] == '.' || charGrid[x][y] == '.') {
        continue;
      } else if (charGrid[x][y] == charGrid[i][j]) {
        not_valid = true;
        cout << "not in same row =" << not_valid << endl;
        return 0;
      }
    }

    for (int j = 1; j < charGrid.size(); j++) {
      if (charGrid[i][j] == '.' || charGrid[n][m] == '.') {
        continue;
      } else if (charGrid[n][m] == charGrid[j][i]) {
        not_valid = true;
        cout << "not in same row =" << not_valid << endl;
        return 0;
      }
    }
    x++;
    m++;
  }
  cout << "not in same row =" << not_valid << endl;

  return 0;
}
