#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  time_t *t,tt;
  t=&tt;

  //1970/1/1 00:00:00��ثe�Ҹg�L�����
  //�]�O�ثePC�t�ήɶ�
  tt=time(NULL);

  cout << "�ثePC�t�ήɶ�:"
       << ctime(t)  ;
  //ctime(t)�A�NPC�t�ήɶ��ഫ��26�Ӧr�����r��
   
  system("pause");    
  return 0;
 }	
