#include <iostream>
#include <string>

// functions can can share same names but you need different set of parameters
// A functions name plus it's parametes is call a functions signature
// and each functions signature is to be unique kind of like an ID

void bakePizza();
void bakePizza(std::string);
void bakePizza(std::string, std::string);

int main() {
  bakePizza();
  bakePizza("Pepproni");
  bakePizza("Pepproni", "Mushroom");

  return 0;
}

void bakePizza() { std::cout << "Here is your Pizza\n"; }
void bakePizza(std::string topping) {
  std::cout << "Here is your " << topping << " Pizza \n";
}
void bakePizza(std::string topping1, std::string topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2
            << " Pizza \n";
}
