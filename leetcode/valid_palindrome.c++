#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    // Remove non-alphanumeric characters and convert to lowercase
    for (int j = 0; j < 8; j++) {
      for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')) {
          continue;
        } else {
          s.erase(i, 1);
          i--; // Adjust index after erasing
        }
      }
    }

    // Convert uppercase letters to lowercase
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] = s[i] + 32; // Convert to lowercase
      }
    }

    // Check if the string is a palindrome
    string copy = s;
    reverse(copy.begin(), copy.end());
    return s == copy;
  }
};

int main() {
  Solution solution;
  string test = "A man, a plan, a canal: Panama";

  if (solution.isPalindrome(test)) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}
