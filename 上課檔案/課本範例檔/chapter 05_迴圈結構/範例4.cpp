#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int num,temp; 
  cout << "��J�@�����:" ;   
  cin >> num ;
  cout << num << "�˹L�Ӭ�" ;
  temp= num;
  while (num>0) //�N����ƭ˹L�ӿ�X
   {
    temp = num % 10; //���Xnum���Ӧ��
    cout << temp ;
    num = num / 10; //�h��num���Ӧ��
   }
  cout << '\n' ;
  system("pause");
  return 0;
 }	
