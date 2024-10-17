#include <iostream>
int main() {
  std::string name;
  while (name.empty()) {
    std::cout << "Enter you name: ";
    std::getline(std::cin, name);
  }
  std::cout << "your name " << name;
  return 0;
}
