#include <cstdio>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sys/wait.h>

void showBalance(double);
double deposit();
double withdraw(double);

int main() {
  double balance = 0;
  int choice = 0;
  do {
    std::cout << "*********************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "********************\n";
    std::cout << "1. Show balance\n";
    std::cout << "2. Deposite money\n";
    std::cout << "3. withdraw money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);
    switch (choice) {
    case 1:
      showBalance(balance);
      break;
      ;
    case 2:
      balance += deposit();
      showBalance(balance);
      break;
    case 3:
      balance -= withdraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout << "thanks for visiting!\n";
      // Here both exit and return works the same
      exit(0);
      /*return 0;*/
    default:
      std::cout << "Invalid input\n";
    }

  } while (choice != 4);
  return 0;
}

void showBalance(double balance) {
  std::cout << "your balance is: $" << std::setprecision(2) << std::fixed
            << balance << "\n";
  //
}

double deposit() {
  double amount = 0;
  std::cout << "Enter amount to be deposited: ";
  std::cin >> amount;
  if (amount > 0)
    return amount;
  else {
    std::cout << "That's not a valid amount: \n";
    return 0;
  }
}

double withdraw(double balance) {
  double amount = 0;
  std::cout << "Enter amount to be withdrawn: ";
  std::cin >> amount;
  if (balance < amount) {
    std::cout << "insufficient funds\n";
    return 0;
  }

  else if (amount < 0) {
    std::cout << "That's not a valid amount\n";
    return 0;
  }

  else
    return amount;
}
