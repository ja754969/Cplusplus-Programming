//On the left, there are numbers from 0 to 9. 
//On the right are their squares.
#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i <= 9){
    square = i*i;
    std::cout << i << "   " << square <<"\n";
    i++;
  }
  
}
