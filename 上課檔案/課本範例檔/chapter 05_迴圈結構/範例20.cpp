#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n,backup_n;
  int divisor; //����
  int position=0;
  cout << "��J�@�����n:" ;
  cin >> n;
  backup_n=n;
  //��Xn�ন2�i���ƫ�,�X�{�b�̥��䪺1����m(�q�k���_)
  //�Yn�ন2�i���ƫ�,�O�X���
  while (n != 0)
   {
    position++;
    // ���H2,�Y�h��2�i���ܪk���Ӧ��
    n=n>>1; // n/2
   }

  n=backup_n;
  cout << n << "�ন2�i���Ƭ�";
  while (position > 0)
   {
    //����=1*(2��position-1����),
    //�Y���ƪ���position��m��1,��l��m��0
    position--;
    divisor=1<<position;
    //n�ন2�i���ƫ�,
    //n & divisor��ܲ�position��m����
    if ((n & divisor)>0)
       cout << '1' ;
    else
       cout << '0' ;
   }
  cout << '\n';
  
  system("pause");    
  return 0;
 }	
