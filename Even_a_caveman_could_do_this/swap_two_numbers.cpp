#include "iostream"
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  /* ========== without using temporary variable ========== */
  cout << "without using temporary variable\n";
  b = a + b;
  a = b - a;
  b = b - a;
  cout << a << "\t" << b;

  /* ========== using STL ========== */
  cout << "\nusing STL\n";
  swap(a, b);
  cout << a << "\t" << b;
  return 0;
}
