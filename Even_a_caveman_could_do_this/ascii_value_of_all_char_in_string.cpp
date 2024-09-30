#include "iostream"
#include "string"
using namespace std;
int main(int argc, char *argv[]) {
  /* =========== Using charater array =========== */
  cout << "\n"
       << "wiht spaces: ";
  char ch[100];
  int val, i = 0;
  cin.getline(ch, 100);
  while (ch[i]) {
    val = ch[i];
    cout << ch[i] << "\t\t\t" << val
         << "\n"; // << "\t\t\t" << char(val) << "\n";
    i++;
  }

  /* =========== Using strings =========== */
  cout << "\n"
       << "with spaces using strings: ";
  string str;
  i = 0;
  getline(cin, str);
  while (str[i]) {
    cout << str[i] << "\t\t\t" << int(str[i]) << "\n";
    i++;
  }

  /* =========== ascci values of all alphabets =========== */
  cout << "\n"
       << "ascci values of all alphabets: \n";
  char c;
  for (c = 'a'; c < 'z'; c++) {
    cout << c << "\t\t\t" << int(c) << "\n";
  }
  return 0;
}
