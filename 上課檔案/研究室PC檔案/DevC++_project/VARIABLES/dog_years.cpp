#include <iostream>

int main() {
  //the dog is 7 years old
  int dog_age = 7;
  //dog・s first two years
  int early_years = 21;
  //dog・s following years
  int later_years = (dog_age - 2)*4;
  //dog・s total human years
  int human_years = early_years + later_years;
  //displays dog・s name and age in human years.
  std::cout << "My name is Ball! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
