#include <iostream>
// Local variables = declared inside a function or block {}
// Global variables = declared outside of all functions

void printNum();

int myNum = 3; // Global
int main() {
  int myNum = 1; // Local
  // when variables are called the local will be used frst then Global
  // Here the '::' is score resolution operator to explicitly use the global
  // variable
  // Try to avoid global variables, because it pollutes global namesapce and
  // these variables are less secure
  std::cout << ::myNum << "\n";
  std::cout << myNum << "\n";
  printNum();
  return 0;
}
void printNum() {
  int myNum = 2; // Local
  std::cout << myNum << "\n";
}
