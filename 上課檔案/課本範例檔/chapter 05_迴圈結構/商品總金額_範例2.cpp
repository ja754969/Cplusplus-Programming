#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,n;
  int money,totalmoney=0;
  cout << "��J�z�n�R���ӫ~�������ƥ�(n>=1):" ;
  cin >> n;
  for (i=1 ; i<=n ; i++ )
   {	
    cout << "��J��" << i << "�ذӫ~������:" ;
    cin >> money ;
    totalmoney = totalmoney + money;
   }
  cout << "�����ӫ~���`���B=" << totalmoney << endl ;
  system("pause");
  return 0;
 }	
