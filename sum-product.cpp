#include <iostream>
#include <vector>

int main() {

  //Create a vector of type integer
  std::vector<int> number_list = {2, 4, 3, 6, 1, 9};
  //Create an integer variable initialised at 0
  int evenSum = 0;
  //Create another initialised at 1 (due to multiplying with it later)
  int oddProduct = 1;

  //Loop: as i increases from 0 to the size of the vector,
  //if the number is even, make evenSum the sum of itself + that number
  //otherwise, make oddProduct the product of oddProduct multiplied by an odd number
  for (int i = 0; i < number_list.size(); i++) {
    if (number_list[i] % 2 == 0) {
      evenSum = evenSum + number_list[i];
    } else {
      oddProduct = oddProduct * number_list[i];
    }
  }

  std::cout << "Sum of even numbers is: " << evenSum << ".\n";
  std::cout << "Product of odd numbers is: " << oddProduct << ".\n";

}