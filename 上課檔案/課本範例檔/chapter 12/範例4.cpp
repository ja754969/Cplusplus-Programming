#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

struct employee
 {
  string name;
  int  height;
  int  weight;    
  void printbmi()
   {
    float bmi; //BMI：身體質量指數
    bmi=weight/pow(height/100.0,2);
    cout << name << "的體重=" << weight 
         << "\tBMI=" << bmi << '\t'; 
    
    if (bmi<18.5)
      cout << "體重過輕\n" ;
    else if (bmi<24)
      cout << "體重在正常範圍\n" ;
    else if (bmi<27)
      cout << "體重過重\n" ;
    else if (bmi<30)
      cout << "體重輕度肥胖\n" ;
    else if (bmi<35)
      cout << "體重中度肥胖\n" ;
    else
      cout << "體重重度肥胖\n";
            
   } 
 };

void bmi(struct employee [],int);

int main()
 {
  struct employee member[3]={
         {"張三",168,55},
         {"王五",179,53},
         {"李四",160,62}};

  bmi(member,3);
  system("pause");
  return 0;
 }

void bmi(struct employee data[],int size)
 {
  int i;
  for (i=0;i<size;i++)    
    data[i].printbmi() ;
 }
