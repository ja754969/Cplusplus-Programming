#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;
int main()
 { 
  string name="mike"; //�Ѧ�7-1-3�r��
  int age=28;
  char blood='A';
  float height=168.567;
  double money=1234567000;

  cout.precision(4);//�]�w��Ƹ��1��ίB�I�Ƹ�ƪ��p�Ʀ��1��
  //cout.setf(ios::fixed); //�T�w�p���I��1��
  cout << "1234567890123456789012345678901234567890"
     << "1234567890\n"
     << "�ڪ��W�r�s" << name
     << "\t���~" << age << "��\n"
     << "�嫬�O" << blood <<"\t����"
     << setw(7) << height << "����\t" ;
     
  cout.precision(6); //�]�w��Ƹ��6��ίB�I�Ƹ�ƪ��p�Ʀ��6��
  cout.unsetf(ios::fixed);  //�T�w�p���I��1��
  cout.setf(ios::scientific); //�B�I�ƥH��ǰO�����覡
  cout << "�Ȧ�s��" << money << "��\n";
  system("pause");
  return 0;
 }
