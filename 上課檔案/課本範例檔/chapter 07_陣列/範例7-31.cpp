#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string birthdate;
  string asterism_data[36]={"01.21","02.18","���~�y",
         "02.19","03.20","�����y",
         "03.21","04.20","�d�Ϯy",
         "04.21","05.20","�����y",
         "05.21","06.21","���l�y",
         "06.22","07.22","���ɮy",
         "07.23","08.22","��l�y",
         "08.23","09.22","�B�k�y",
         "09.23","10.23","�ѯ��y",
         "10.24","11.22","���Ȯy",
         "11.23","12.21","�g��y",
         "12.22","01.20","�]�~�y"};
  int i;
  cout << "��J�X�ͤ��(�榡:99.99):" ;
  cin >> birthdate ;
  for (i=0;i<36;i=i+3)
   {
    if (birthdate>=asterism_data[i])
     if (birthdate<=asterism_data[i+1])
      {
       cout <<  "�P�y��:" << asterism_data[i+2] << '\n' ;
       break;
      }
   }
  if (i==36)
    cout << "�P�y��:�]�~�y\n" ;
  
  system("PAUSE");	
  return 0;
 }
