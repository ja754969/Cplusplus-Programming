#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[7]={5,7,12,16,26,58,71};
  int num;
  int left,right,middle;
  cout << "��J�j�M�����:" ;
  cin >> num ;
  left=0;
  right=6;

  //�����Ʀ�m<=�k���Ʀ�m�A��ܦ���Ƥ~��j�M
  while (left<=right)
   {
    middle=(left+right)/2; //�ثe��Ƥ���������m
    if (num==data[middle]) //�j�M���=��������
       break;
    else if (num > data[middle])
       left= middle+1; //�����Ʀ�m=��Ƥ�����m+1
    else
       right=middle-1; //�k���Ʀ�m=��Ƥ�����m-1
   }
  if (left<=right) //�����Ʀ�m<=�k���Ʀ�m�A��ܦ��j�M����
    cout << num << "����Ƥ�����"
         << middle+1 << "�Ӧ�m\n" ; 
  else
    cout << num << "���b��Ƥ�\n" ;

  system("PAUSE");	
  return 0;
 }
