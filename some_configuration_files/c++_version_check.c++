
#include <iostream>

int main() {
  if (__cplusplus == 201703L)
    std::cout << "C++17\n";
  else if (__cplusplus == 202002L)
    std::cout << "C++20\n";
  else if (__cplusplus == 202300L)
    std::cout << "C++23\n";
  else
    std::cout << "Pre-C++17\n";
}
