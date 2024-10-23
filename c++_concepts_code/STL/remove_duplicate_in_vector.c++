
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 2, 3, 4, 4, 4, 5};

  // Remove consecutive duplicates
  auto it = std::unique(vec.begin(), vec.end());

  // Resize the vector to remove undefined elements
  vec.resize(std::distance(vec.begin(), it));

  // Print the modified vector
  for (int n : vec) {
    std::cout << n << " ";
  }
  return 0;
}
