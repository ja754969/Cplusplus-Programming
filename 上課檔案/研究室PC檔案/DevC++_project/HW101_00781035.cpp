//�g�@�{���A��J�@��ơA�P�_���Ƨ_���Y�@�Ӿ�ƪ�����C
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  int it;
  double root;
  cout << "�п�J�@�Ӿ�� : ";
  cin >> it;     
  root = sqrt(it);
  if (root - int(root) == 0){
  	cout << "���T\n"<<it<< "�O" << root <<"������\n"; 
  }
  else{
  	cout << "���~\n"<<it<<"���ڤ��O��ơA�O" << root << '\n';
  }
  
  
  system("pause");    
  return 0;
 }	 
