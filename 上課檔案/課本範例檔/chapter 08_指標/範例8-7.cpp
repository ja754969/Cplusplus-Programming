#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  char *name[3]={"�»�" , "�i�L��" , "�i�T��"};
  int i,j;
  char *temp;
  cout << "�Ƨǫe�����:";
  for (i=0;i<3;i++)
    cout << name[i] << ' ';
  cout << "\n";

  for (i=1;i<=2;i++) //����2(=3-1)�ӨB�J
    for (j=0;j<3-i;j++)//��i�B�J,����3-i�����       
     if ((string)name[j] > (string)name[j+1]) //���䪺��Ƥ���j
      {
       temp=name[j]; //�Nname[j]�Pname[j+1]
       name[j]= name[j+1]; //�ҫ��V���r�꤬��
       name[j+1]=temp;
      }

  cout << "�Ƨǫ᪺���:";
  for (i=0;i<3;i++)
     cout << name[i] << ' ';
  cout << "\n";
   
  system("PAUSE");	
  return 0;
 }
