#include <iostream>
#include <cstdlib>
using namespace std;
class student
 {
  private:    
    string birth ;
    string tel ;     
    struct grade 
     {
      string subject[3];
      int score[3] ;
     } sgrade ;    

  public:
    string name ;
    char sex ;                
 } ;
 
int main()
 {
  cout << "class student資料型態所佔的記憶體空間:" 
       << sizeof(student) << endl;        
  system("pause") ;
  return 0;
 }
