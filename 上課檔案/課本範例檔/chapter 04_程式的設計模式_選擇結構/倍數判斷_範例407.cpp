#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int num;
  cout << "��J�@�ӥ����:" ;
  cin >> num ; 
  if (num % 3 == 0) //��3������
    if (num % 7 == 0) //��7������
      cout << num << "�O3��7������\n" ;
    else
      cout << num << "�O3������\n" ;
  else
    if (num % 7 == 0) //��7������
      cout << num << "�O7������\n" ;
    else
      cout << num << "���O3�����Ʃ�7������\n" ;

  system("pause");
  return 0;
 }

