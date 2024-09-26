#include "iostream"
using namespace std;
int main(int argc, char *argv[]) {
  int a, b, c;
  cout << "mention three numbers\n";
  cin >> a >> b >> c;
  if (a > b && a > c)
    cout << a;
  else if (b > c)
    cout << b;
  else
    cout << c;
  return 0;
}
