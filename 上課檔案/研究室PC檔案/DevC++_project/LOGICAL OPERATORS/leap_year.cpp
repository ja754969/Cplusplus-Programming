/*
If the year can be evenly divided by 4 then it is a leap year, however¡K
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year. */
#include <iostream>

int main() {
  int year = 0;
  std::cout << "Enter a four-digit year: ";
  std::cin >> year;
  if (year < 0 || year > 9999){
    std::cout << "Invalid value.\n";
  }
  else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    std::cout << year;
    std::cout << " is a leap year.\n";
  }
  else {
    std::cout << year;
    std::cout << " is a common year.\n";
  }
}

