#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n;
  int f_num=0,non_f_num=0;
  cout << "��J�@�����n:" ;
  cin >> n;
  cout << n <<"�ন16�i���ƫ�,";
  while (n != 0)
   {
    //n & 15:���n�P15�� mask(�B�n�B��)(�Y,�줸�B(&)�B��)
    //�Y16�i���ܪk���Ӧ�ƪ��Ȭ�F(�Y,15)�A
    //�hn & 15�����G��15,�_�h���D15
    if ((n & 15)==15)
      f_num++;
    else
      non_f_num++;

    //���H16(=2^4),�Y�h��16�i���ܪk���Ӧ��
    //�]16�i��O�H�|��2�i��ƪ��
    n=n>>4;
   }
  cout << "�䤤�@��" << f_num
       << "��F��" << non_f_num
       << "�ӫDF\n" ;
  
  system("pause");    
  return 0;
 }	
