#include "iostream"
using namespace std;
int main(int argc, char *argv[]) {
  int i, num;
  cin >> num;
  for (i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      cout << "not a prime";
      return 0;
    } else {
      cout << "prime";
      return 0;
    }
  }
  return 0;
}
