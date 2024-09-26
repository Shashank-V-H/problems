#include "iostream"
using namespace std;
int main(int argc, char *argv[]) {
  int Year;
  cin >> Year;
  if (Year % 400)
    cout << "true";
  else if (Year % 100 == 0)
    cout << "false";
  else if (Year % 4 == 0)
    cout << "true";
  else
    cout << "false";
  return 0;
}
