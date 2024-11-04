class Solution {
public:
  string clearDigits(string s) {
    vector<char> result;
    for (char c : s) {
      if (isdigit(c)) {
        if (!result.empty()) {
          result.pop_back(); // Remove the last character
        }
      } else {
        result.push_back(c); // Add non-digit characters
      }
    }
    return string(result.begin(), result.end());
  }
};
