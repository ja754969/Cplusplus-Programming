#include <iostream>
#include <cstdlib>
using namespace std;
void transpose(int [][3],int); //�ŧi�禡
int main()
 {
  int num[2][3],i,j;
  cout << "��J2x3�x�}:\n";
  for (i=0;i<2;i++)
    for (j=0;j<3;j++)
    {
     cout << "��" << i << "�C,��" << j << "�檺��:" ;
     cin >> num[i][j] ;
    }
  cout << "��l��2x3�x�}:\n" ;
  for (i=0;i<2;i++)
   {
    for (j=0;j<3;j++)
      cout << num[i][j] ;
    cout << '\n' ;
   }

  transpose(num,2);

  system("pause");
  return 0;
 }

void transpose(int d[][3],int m) //�w�q�禡
 {
  int i,j;
   cout << "��m���ܦ�3x2�x�}:\n" ;
  for (j=0;j<3;j++)
   {
    for (i=0;i<m;i++)
      cout << d[i][j] ;
    cout << "\n" ;
   }
 }  
 
