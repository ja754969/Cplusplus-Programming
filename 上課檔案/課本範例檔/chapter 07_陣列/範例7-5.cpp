#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[7]={7,5,12,16,26,71,58};
  int i,num;
  cout << "��J�j�M�����:" ;
  cin >> num ;
  for (i=0;i<7;i++)
    if (num==data[i])
      {
       cout << num <<"����Ƥ�����" 
            << i+1 << "�Ӧ�m\n" ;
       break;
      }

 //�p�G�j�M����Ƥ��b��Ƥ�,�̫�for�j�骺i=7
  if (i==7)
    cout << num << "���b��Ƥ�\n" ;

  system("PAUSE");	
  return 0;
 }
