#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct blood
 {
  string name;
  int  number; 
 };

 struct blood blood_num(struct blood [],int);

int main()
 {
  int i;
  struct blood student[5]={ {"眎",5},
          {"き",3},{"",7},
		  {"狶",2},{"朝",4} };
		  
  struct blood big_number;
 
  cout << "﹎\t﹀Ω计\n" ;
    
  for (i=0;i<5;i++)
    cout << student[i].name << '\t'
	     << student[i].number << endl ;
  
  big_number=blood_num(student,3);

  cout << "﹀Ω计程" << big_number.name
       << ",﹀Ω计" << big_number.number
       << "Ω\n" ;

  system("pause");
  return 0;
 }


struct blood blood_num(struct blood data[],int size)
 {
  int i,j;
  struct blood temp; //既temp挡篶
  temp=data[0]; //砞﹚data[0]﹀Ω计程挡篶
  for (i=1;i<=size-1;i++) //磅︽size-1Ωゑ耕
    if (temp.number < data[i].number)
       temp=data[i]; //砞﹚data[i]﹀Ω计程挡篶

  return temp; //肚﹀Ω计程﹎の﹀Ω计
 }


