//�@�����СB�G���}�C 
#include <iostream>
#include <cstdlib>
#include <iomanip> 
using namespace std;
int main()
 { 
  int num[3][2] = {1,2,3,4,5,6};
  int *ptr;
  ptr = num[0]; 
  //���onum�}�C�Ĥ@�Ӥ����Ҧb���O�����}��ptr�x�s 
  //*ptr �����s��num�}�C�Ĥ@�Ӥ������O�����}�����e
  cout<<"num�}�C�Ĥ@�Ӥ������O�����}�����e:"<<*ptr
  <<'\n'<<"num�}�C�Ĥ@�Ӥ����Ҧb���O�����}"<<ptr<<"\n\n";
  
  for (int i=0;i<6;i++){
  	cout<<setw(10)<< *ptr;
  	//cout<<setw(10)<< num[i];
  	ptr++;
  } 
  //cout<<"\nnum�}�C�̫�@�Ӥ������O�����}�����e:"<<*ptr
  //<<'\n'<<"num�}�C�̫�@�Ӥ����Ҧb���O�����}"<<ptr<<'\n';
  cout << '\n';
  for (int i=0;i<6;i++){
  	cout<<setw(10)<< num[i];
  	ptr++;
  } 
  cout << '\n';
  //cout<<"\nnum�}�C�̫�@�Ӥ������O�����}�����e:"<<*ptr
  //<<'\n'<<"num�}�C�̫�@�Ӥ����Ҧb���O�����}"<<ptr<<'\n';
  
  system("pause");
  return 0;
 }
