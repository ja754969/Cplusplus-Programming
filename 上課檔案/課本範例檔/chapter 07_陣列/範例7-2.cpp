#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int m[7],total=0,i; //�u��ϥ�m[0],m[1],�K,m[6]
  for (i=0;i<7;i++) //�֭p7�Ѫ���O
   {
    cout << "��J�P��" << i+1 << "����O:" ;
    cin >> m[i] ;
    total=total+ m[i];
   }

  cout <<"�@�P���`��O:" << total
       << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
