//Using an If statement

#include <iostream>

int main() {

    double weight;
    int selectedPlanet;

    std::cout << "Please enter your current Earth weight: ";
    std::cin >> weight;

    std::cout << "Please enter the number of your desired planet - 1:Venus, 2:Mars, 3:Jupiter, 4:Saturn, 5:Uranus, 6:Neptune\n";
    std::cin >> selectedPlanet;

    if (selectedPlanet == 1) {
        weight = weight * 0.78;
    } else if (selectedPlanet == 2) {
        weight = weight * 0.39;
    } else if (selectedPlanet == 3) {
        weight = weight * 2.65;
    } else if (selectedPlanet == 4) {
        weight = weight * 1.17; 
    } else if (selectedPlanet == 5) {
        weight = weight * 1.05;
    } else if (selectedPlanet == 6) {
        weight = weight * 1.23;
    }

    std::cout << "\nYour weight: " << weight << "\n";
}