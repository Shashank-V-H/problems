
#include "iostream"
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(std::string, std::string);

int main(int argc, char *argv[]) {
  // Idea got from comment
  string str1, str2;
  std::getline(cin, str1);
  std::getline(cin, str2);

  std::sort(str1.begin(), str1.end());
  std::sort(str2.begin(), str2.end());
  if (str1 == str2) {
    cout << "It's anagram";
  } else {
    cout << "It's not";
  }
  //
  // The Idea i built
  isAnagram(str1, str2);
}

bool isAnagram(string s, string t) {
  int i = 0;
  if (s.length() != t.length()) {
    cout << 0 << endl;
  } else {
    while (i == 0) {
      for (int j = 0; j < t.length() + 1; j++) {
        if (s.length() == 0 && t.length() == 0) {
          cout << "true";
          return true;

        } else if (s[i] == t[j]) {
          t.erase(j, 1);
          s.erase(i, 1);
          // cout << "str1:" << s << endl << "str2: " << t << endl;
        }
      }
    }
    if (s.length() != 0 && t.length() != 0) {
      cout << "false";
      return false;
    }
  }
  cout << "false";
  return false;
}
