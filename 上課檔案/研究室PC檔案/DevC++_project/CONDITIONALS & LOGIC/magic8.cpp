#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  std::cout << "MAGIC 8-BALL:\n\n";
  //std::cout << std::rand() << "\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer;
  //if answer is equal to 0
  //outputs the phrase It is certain
  if (answer == 0){
    std::cout << "It is certain.\n";
  }
  else if (answer == 1){
    std::cout << "It is decidedly so.\n";
  }
  else if (answer == 2){
    std::cout << "Without a doubt..\n";
  }
  else if (answer == 3){
    std::cout << "Yes - definitely.\n";
  }
  else if (answer == 4){
    std::cout << "You may rely on it.\n";
  }
  else if (answer == 5){
    std::cout << "As I see it, yes.\n";
  }
  else if (answer == 6){
    std::cout << "Most likely.\n";
  }
  else if (answer == 7){
    std::cout << "Yes.\n";
  }
  else if (answer == 8){
    std::cout << "Signs point to yes.\n";
  }
  //for the 10th answer
  else{
    std::cout << "Very doubtful.\n";
  }
}
