#include <iostream>
void happyBirthday(std::string, int);
int main() {
  // function = a block of reusable code
  std::string name = "Hank";
  int age = 21;
  happyBirthday(name, 21);
  return 0;
}
void happyBirthday(std::string birthdayboi, int age) {
  std::cout << "Happy Birthday to you!" << birthdayboi << "\n";
  std::cout << "Happy Birthday to you!" << birthdayboi << "\n";
  std::cout << "Happy Birthday to you!" << birthdayboi << "\n";
  std::cout << "Happy Birthday to you!n" << birthdayboi << "\n";
  std::cout << "you're " << age << " old\n";
}
