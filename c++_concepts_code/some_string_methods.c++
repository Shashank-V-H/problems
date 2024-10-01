#include "iostream"
int main(int argc, char *argv[]) {
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if (name.length() > 12) { // lenght method
    std::cout << "your name cannot be longer than 12 characters\n";
  }

  else if (name.empty()) { // empty method
    std::cout << "you didn't enter your name\n";
  }

  else {
    std::cout << name << "\n";
  }

  name.append("@gmail.com"); // append method
  std::cout << "after appending the gamail.com: " << name << "\n";

  std::cout << name.at(0)
            << "\n"; // at method to return a character at particular location

  std::cout << name.insert(0, "@")
            << "\n"; // insert method to add @ at 0th position

  std::cout << name.find(" ")
            << "\n"; // find method to find the first space in the string
                     //
  std::cout << name.erase(0, 5)
            << "\n"; // erase method to erase the characters in string by
                     // specifying the starting and ending (not inclusive) index
  name.clear();      // clear method
  std::cout << "after clearing the name: " << name;

  return 0;
}
