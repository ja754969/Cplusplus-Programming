#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string name[2]; //2�Ӿǥͪ��m�W
  int score[2][3]; //2�Ӿǥͪ�3�즨�Z
  int total[2]={0}; //2�Ӿǥͪ��`���Z
  int i,j;
  for (i=0;i<2;i++) //2�Ӿǥ�
   {
    cout << "��J��" << i+1 << "�Ӿǥͪ��m�W:" ;
    cin >> name[i] ;
    for (j=0;j<3;j++) //3��
     {
      cout << "��" << j+1 << "�즨�Z:" ;
      cin >> score[i][j] ;
      total[i]+= score[i][j]; //�֭p
     }
   }
  for (i=0;i<2;i++) //2�Ӿǥ�
     cout << name[i] << "���`���Z:"
          << total[i] << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
