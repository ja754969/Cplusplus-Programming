#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void totalmoney(int [][3][2],int); //�ŧi�禡
int main()
 {
  int money[2][3][2],i,j,k;
  string interval[2]={"�W","�U"}; 

  for (i=0;i<2;i++)
    for (j=0;j<3;j++)
      for (k=0;k<2;k++)
       {
        cout << "��J��" << i+1<<"�a�����q��" 
             << j+1 << "�~" << interval[k]
             << "�b�~����~�B(���:��):" ;
        cin >> money[i][j][k] ;
       }
   totalmoney(money,2);


  system("pause");
  return 0;
 }

void totalmoney(int d[][3][2],int l) //�w�q�禡
 {
  int i,j,k,sum=0;
  for (i=0;i<l;i++)
    for (j=0;j<3;j++)
      for (k=0;k<2;k++)
        sum=sum+d[i][j][k];

  cout << "�`��~�B(���:��):" << sum << '\n' ;
 }
    
