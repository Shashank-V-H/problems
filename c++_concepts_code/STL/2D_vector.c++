#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<vector<string>> result; // Empty 2D vector of strings
  vector<string> group = {"eat", "tea", "ate"};
  result.push_back(group); // Adding one group of anagrams
  for (const auto &group : result) {
    for (const auto &word : group) {
      cout << word << " "; // Print each string
    }
    cout << endl; // Move to the next line for each group
  }
  return 0;
}
