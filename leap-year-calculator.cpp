#include <iostream>

int main() {
  
  int year;
  std::cout << "Please enter a year (1000 or above): \n";
  std::cin >> year;

  //If the user input is lower than 1000 OR larger than 9999
  if (year < 1000 || year > 9999) {
    std::cout << "Year is needs to be 4 digits. Try again.";
  //If 4 goes into 'year' AND 100 doesn't OR if 400 does,
  //it is a leap year
  } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << "That is a leap-year!\n";
  //If 'year' doesn't meet these conditions, it is not a leap year
  } else {
    std::cout << "That is NOT a leap-year.\n";
  }
  
}