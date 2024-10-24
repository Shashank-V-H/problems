
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Define a 2D vector with some duplicate tuples
  vector<vector<int>> vec = {
      {3, 4, 1}, {2, 8, 2}, {1, 3, 4}, {7, 1, 9}, {1, 3, 4} // Duplicate row
  };

  cout << "before sorting and removing duplicates:\n";
  for (const auto &row : vec) {
    for (int x : row) {
      cout << x << " ";
    }
    cout << "\n";
  }
  // Step 1: Sort elements within each row
  for (auto &row : vec) {
    sort(row.begin(), row.end());
  }

  // Step 2: Sort the entire 2D vector to bring duplicate rows together
  sort(vec.begin(), vec.end());

  // Step 3: Remove duplicate rows using std::unique
  auto last = unique(vec.begin(), vec.end());
  vec.erase(last, vec.end());

  // Display the unique 2D vector
  cout << "Unique tuples in the 2D vector:\n";
  for (const auto &row : vec) {
    for (int x : row) {
      cout << x << " ";
    }
    cout << "\n";
  }

  return 0;
}
