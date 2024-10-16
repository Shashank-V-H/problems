#include "iostream"
using namespace std;

int main(int argc, char *argv[]) {
  int n, k;
  cout << "enter n: ";
  cin >> n;
  int a[n];
  cout << "enter k: ";
  cin >> k;
  int x[k + 1];
  cout << "enter array vlues: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < k + 1; i++) {
    x[i] = a[i];
  }

  cout << "================";
  for (int i = 0; i < k + 1; i++) {
    cout << x[i];
  }
  cout << endl;
  for (int i = 0; i < k + 1; i++) {
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    cout << endl;

    for (int j = 0; j < n - 1; j++) {
      a[j] = a[j + 1];
    }

    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    cout << endl;
  }
  int j = 0;
  for (int i = (n - k) - 1; i < n; i++) {
    a[i] = x[j];
    j++;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i];
  }
  return 0;
}
