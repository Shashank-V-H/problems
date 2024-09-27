#include "iostream"
using namespace std;
int main(int argc, char *argv[]) {
  /* =============== For numbers===============*/
  int j, n;
  cout << "\nEnter number length: ";
  cin >> n;
  j = n - 1;
  int a[n], rev[n];
  cout << "\nEnter number number with spaces: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    rev[j] = a[i];
    j--;
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != rev[i]) {
      cout << "\nnot a palindorme";
      return 0;
    }
  }
  cout << "\npalindorme";
  return 0;
}
