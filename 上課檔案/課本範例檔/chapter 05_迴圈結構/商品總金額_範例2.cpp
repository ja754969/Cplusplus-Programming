#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,n;
  int money,totalmoney=0;
  cout << "輸入您要買的商品之種類數目(n>=1):" ;
  cin >> n;
  for (i=1 ; i<=n ; i++ )
   {	
    cout << "輸入第" << i << "種商品的價格:" ;
    cin >> money ;
    totalmoney = totalmoney + money;
   }
  cout << "全部商品的總金額=" << totalmoney << endl ;
  system("pause");
  return 0;
 }	
