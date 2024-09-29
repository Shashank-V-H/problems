#include "iostream"
using namespace std;
int main(int argc, char *argv[]) {
  int op1, op2, res = 0;
  char op;
  cout << "enter fist two operands: ";
  cin >> op1 >> op2;
  cout << "enter operator: ";
  cin >> op;
  switch (op) {
  case '+':
    res = op1 + op2;
    break;
  case '-':
    res = op1 - op2;
    break;
  case '*':
    res = op1 * op2;
    break;
  case '/':
    if (op2 == 0)
      cout << "invalid operand 2";
    else
      res = op1 / op2;
  default:
    cout << "invalid input";
  }
  cout << "\nresult:" << res;
  return 0;
}
