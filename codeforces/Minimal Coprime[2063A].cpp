#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  int n1, n2;
  while (t--) {
    cin >> n1 >> n2;
    if (n1 == 1 && n2 == 1) {
      cout << 1 << "\n";
    } else
      cout << n2 - n1 << "\n";
  }

  return 0;
}
