#include "iostream"
#include "string"
using namespace std;
int main(int argc, char *argv[]) {
  /* =============== For numbers===============*/
  /*int j;
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
  cout << "\npalindorme"; */

  int num, dummy, x = 0, size, arr[20], rev[20], z;
  /*cin >> size;*/
  cin >> num;
  dummy = num;
  while (dummy) {
    arr[x] = dummy % 10;
    /*cout << "\n" << arr[x] << "\n";*/
    dummy /= 10;
    /*cout << "\n" << dummy << "\n";*/
    x++;
  }
  z = x - 1;
  for (int i = 0; i < x; i++) {
    rev[i] = arr[z];
    z--;
  }
  z = x;
  for (int i = 0; i < x; i++) {
    cout << "arra" << arr[i];
  }
  for (int i = 0; i < x; i++) {
    cout << "rev" << rev[i];
  }

  for (int i = 0; i < x; i++) {
    if (arr[i] != rev[i]) {
      cout << "\nnot a palindorme";
      return 0;
    }
  }
  cout << "\npalindorme";

  /* =============== For String ===============*/
  /*cout << "\nEnter string: ";*/
  /*string str, rev_str;*/
  /*int k, n;*/
  /*cin >> str;*/
  /*k = str.length() - 1;*/
  /*for (int i = 0; i < str.length(); i++) {*/
  /*  rev_str[k] = str[i];*/
  /*  k--;*/
  /*}*/
  /*for (int i = 0; i < n; i++) {*/
  /*  if (str[i] != rev_str[i]) {*/
  /*    cout << "\nnot a palindorme";*/
  /*    return 0;*/
  /*  }*/
  /*}*/
  /*cout << "\npalindorme";*/
  /*return 0;*/
}
