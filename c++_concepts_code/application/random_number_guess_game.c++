#include <iostream>
int main() {
  int num, guess = -1, tries = 0;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std::cout << "********** NUMBER GUESSING GAME **********\n";
  do {
    tries += 1;
    std::cout << "Enter a guess between 1-100\n";
    std::cin >> guess;
    if (guess > num)
      std::cout << "too high!\n";
    else if (guess < num)
      std::cout << "too low!\n";
    else
      std::cout << "CORRECT!\ntotoal tries: " << tries << "\n";
  } while (guess != num);
  std::cout << "******************************************\n";
  return 0;
}
