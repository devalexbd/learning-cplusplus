#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // While i is less than 10, multiply it by itself, then increase i by 1.
  while (i < 10) {
    square = i * i;
    std::cout << i << " " << square << "\n";
    i++;
  }
}