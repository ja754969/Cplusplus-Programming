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
    float bmi; //BMI�G�����q����
    bmi=weight/pow(height/100.0,2);
    cout << name << "���魫=" << weight 
         << "\tBMI=" << bmi << '\t'; 
    
    if (bmi<18.5)
      cout << "�魫�L��\n" ;
    else if (bmi<24)
      cout << "�魫�b���`�d��\n" ;
    else if (bmi<27)
      cout << "�魫�L��\n" ;
    else if (bmi<30)
      cout << "�魫���תέD\n" ;
    else if (bmi<35)
      cout << "�魫���תέD\n" ;
    else
      cout << "�魫���תέD\n";
            
   } 
 };

void bmi(struct employee [],int);

int main()
 {
  struct employee member[3]={
         {"�i�T",168,55},
         {"����",179,53},
         {"���|",160,62}};

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
