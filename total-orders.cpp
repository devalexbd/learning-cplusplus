#include <iostream>
#include <vector>

int main() {

  //Create a vector containing type of double called delivery_order
  std::vector<double> delivery_order;

  //Add to the vector the following values
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);

  //Create a double variable where I will store the sum of the vector
  double total = 0.0;

  //As i increments from 0 to the number of values in the vector
  //make the total the sum of itself + i
  for (int i = 0; i < delivery_order.size(); i++) {
    total = total + delivery_order[i];
  }

  std::cout << "Total: " << total << ".\n";

}