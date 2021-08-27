/*while guess is not equal to 8
the program will keep on asking the user to input a new number.*/  
#include <iostream>

int main() {

  int guess;
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  while (guess != 8 && tries <50){
    std::cout << "wrong guess, try again: ";
    std::cin >> guess;
    
    tries++; //add 1 to tries
  }
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}
