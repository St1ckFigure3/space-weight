#include <iostream>

int main() {
  // Declare the variables...
  double weight;
  int x;

// Beggining of the program
  std::cout << "Please enter your current weight on Earth: ";
  std::cin >> weight;
//Show info
  std::cout << "\nI have information for the following planets: \n\n";
  
  std::cout << "1. Mercury   2. Venus   3. Mars\n";
  std::cout << "   4. Jupiter   5. Saturn   6. Uranus   7. Neptune\n\n";
// Ask for planet number
std::cout << "Which planet are you visiting?";
std::cin >> x;

if (x == 1) {

  weight = weight * 0.38;

} else if (x == 2) {

  weight = weight * 0.91;

} else if (x == 3) {

weight = weight * 0.38;

} else if (x == 4) {

weight = weight * 2.34;

} else if (x == 5) {

weight = weight * 1.06;

} else if (x == 6) {

weight = weight * 0.92;

} else if (x == 7) {

weight = weight * 1.19;

} else {
    std::cout << "An error occured. Please select a number from the list\n";
}


std::cout << "\nYour weight will be: " << weight << "\n";






  
  
  
  
  
  
  
  
  
  
}