#include "iostream"
int main(int argc, char *argv[]) {
  int score;
  std::cin >> score;
  score >= 50 ? std::cout << "you pass\n" : std::cout << "you fial\n";
  bool hungry = false;
  hungry ? std::cout << "Eat something\n" : std::cout << "Eat Nothing\n";
  // different way of outputting the ternary operator
  std::cout << (hungry ? "Eat something\n" : "Eat nothing\n");
  return 0;
}
