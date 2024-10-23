
#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string original = "hello";
  std::string reversed = original; // Copy original string

  // Reverse the copied string
  std::reverse(reversed.begin(), reversed.end());

  // Print both strings
  std::cout << "Original: " << original << std::endl;
  std::cout << "Reversed: " << reversed << std::endl;

  return 0;
}
