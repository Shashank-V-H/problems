#include <fstream>
#include <iostream>
#include <string>

class Solution {
public:
  int minChanges(std::string s) {
    // Placeholder implementation; replace with your logic
    return s.length(); // Example operation; replace with actual logic
  }
};

int main() {
  Solution solution;
  std::ifstream infile("input.txt"); // Open the input file

  if (!infile) {
    std::cerr << "Error opening input.txt\n";
    return 1;
  }

  std::string s;
  while (std::getline(infile, s)) {      // Read each line until end of file
    int result = solution.minChanges(s); // Call minChanges for each string
    std::cout << "Result for \"" << s << "\": " << result << "\n";
  }

  infile.close();
  return 0;
}
