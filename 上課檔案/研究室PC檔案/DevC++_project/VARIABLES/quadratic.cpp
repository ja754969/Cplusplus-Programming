#include <iostream>
#include <cmath>

int main() {
  double a, b, c;
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "\nEnter b: ";
  std::cin >> b;
  std::cout << "\nEnter c: ";
  std::cin >> c;
  //There are two roots here
  double root1,root2;
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  //output these values
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}
