//Using a Switch statement

#include <iostream>

int main() {
  
    int earthWeight;
    int selectedPlanet;
    //Must initialise a variable outside of a Switch function
    double planetWeight;

    std::cout << "Please enter your weight: ";
    std::cin >> earthWeight;
  
    std::cout << "Please enter the number of your desired planet - 1:Mercury, 2:Venus, 3:Mars, 4:Jupiter, 5:Saturn, 6:Uranus, 7:Neptune\n";
    std::cin >> selectedPlanet;
  
    switch (selectedPlanet) {
      case 1:
        planetWeight = earthWeight * 0.38;
        break;
      case 2:
        planetWeight = earthWeight * 0.91;
        break;
      case 3:
        planetWeight = earthWeight * 0.38;
        break;
      case 4:
        planetWeight = earthWeight * 2.34;
        break;
      case 5:
        planetWeight = earthWeight * 1.06;
        break;
      case 6:
        planetWeight = earthWeight * 0.92;
        break;
      case 7:
        planetWeight = earthWeight * 1.19;
        break;
      default:
        std::cout << "An error has occurred.\n";
        break;
    };

    std::cout << "Old weight: " << earthWeight << ".\n";
    std::cout << "New weight: " << planetWeight << ".\n";
}