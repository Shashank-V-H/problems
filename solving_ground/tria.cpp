/**/
/*#include <bits/stdc++.h>*/
/*using namespace std;*/
/**/
/*int main() {*/
/**/
/*  int t;*/
/*  cin >> t;*/
/*  while (t--) {*/
/*    cout << t;*/
/*    // Solution starts here*/
/*    ios_base::sync_with_stdio(false);*/
/*    cin.tie(nullptr);*/
/*    int n, x, y;*/
/*    cin >> n;*/
/*    x = n;*/
/*    y = n - 1;*/
/*    for (int j = 0; j < n; j++) {*/
/*      for (int i = x; i > 0; i--) {*/
/*        cout << '*';*/
/*        cout << ' ';*/
/*      }*/
/*      x--;*/
/*      cout << endl;*/
/**/
/*      for (int i = 0; i <= j; i++) {*/
/*        cout << " ";*/
/*      }*/
/*    }*/
/*  }*/
/**/
/*  return 0;*/
/*}*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

int main() {
  fast_io;

  int t;
  cin >> t;
  while (t--) {
    // Solution starts here
    int n;
    cin >> n;

    int x = n; // Stars to print in each row
    for (int j = 0; j < n; j++) {
      // Print stars with spaces
      for (int i = x; i > 0; i--) {
        cout << "* ";
      }
      cout << '\n';
      x--;

      // Print leading spaces for next row
      for (int i = 0; i <= j; i++) {
        cout << " ";
      }
    }

    cout << '\n'; // Separate test cases by a blank line
  }

  return 0;
}
