#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int money[2][4]; //2�������q�A�|�u����~�B
  int total=0; //�@�~���`��~�B
  int i,j;
  for (i=0;i<2;i++) //2�������q
   {
    for (j=0;j<4;j++) //�|�u
     {
      cout << "��" << i+1 << "�������q����" 
           << j+1 << "�u��~�B:" ;
      cin >> money[i][j] ;
      total+=money[i][j]; //�`��~�B�֭p
     }
   }
  cout << "�o�a���~�@�~���`��~�B:" 
       << total << '\n' ;
      
  system("PAUSE");	
  return 0;
 }
