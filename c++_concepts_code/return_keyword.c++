#include <iostream>
#include <string>

// NOTE
//  variable and function can't have same name;
//
//
//

double square(double);
double cube(double);
std::string fullName(std::string, std::string);

int main() {
  double length = 5.0;
  double area = square(length);
  double volume = cube(length);
  std::string fulllName;

  std::cout << "Area: " << area << "cm^2\n";
  std::cout << "Area: " << volume << "cm^2";

  // for strings
  std ::string firstName = "Patrick";
  std ::string secondName = "Bateman";
  fulllName = fullName(firstName, secondName);
  std::cout << std::endl << fulllName;
  return 0;
}

double square(double length) {
  double result = length * length;
  return result;
}

double cube(double length) {
  double result = length * length * length;
  return result;
}

std::string fullName(std::string firstName, std::string secondName) {
  return firstName + " " + secondName;
}
