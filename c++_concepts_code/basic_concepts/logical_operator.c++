#include <iostream>
int main() {
  double temp;
  char unit;
  std::cout << "***** Temperature conversion *****\n";
  std::cout << "F = Fahrenheit\n";
  std::cout << "C = Celsius\n";
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;
  if (unit == 'F' || unit == 'f') {
    std::cout << "Enter the temprature in Celcius: ";
    std::cin >> temp;
    temp = (1.8) * temp + 32.0;
    std::cout << temp << "\n";
  }

  else if (unit == 'C' || unit == 'c') {
    std::cout << "Enter the temprature in Fahrenheit: ";
    std::cin >> temp;
    temp = (temp - 32) / 1.8;
    std::cout << temp << "\n";
  } else {
    std::cout << "please enter in only c or f\n";
  }
  std::cout << "***** Temperature conversion *****\n";
  return 0;
}
