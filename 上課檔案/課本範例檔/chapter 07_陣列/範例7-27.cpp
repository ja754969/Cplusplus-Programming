#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string name[2]={"���إ�", "������"};
  int win[2][2][3]; //2�H�A2�~�U3�Ӥ몺�ӳ���
  int total_win[2]={0}; //2�H���`�ӳ��ƪ�l�ȳ���0
  int i,j,k;
  for (i=0;i<2;i++) //2�H
   {
    cout << "��J" << name[i]
         << "�L�h��~5��~7�몺�ӳ���\n" ;
    for (j=0;j<2;j++) //2�~
     {
      for (k=0;k<3;k++) //3�Ӥ�(5��~7��)
       {
        cout << "��" << j+1<< "�~" 
             << k+5 << "�몺�ӳ���:" ;
        cin >> win[i][j][k] ; 
        total_win[i]+=win[i][j][k]; //�֭p�ӤH���`�ӳ���
       }
      }
    }
   for (i=0;i<2;i++)    
     cout << name[i] <<"�C�Ӥ몺�����ӳ���:"      
          << (float)total_win[i]/6 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
