#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  cout << "��J���Z:" ;
  cin >> score ;
  if (score>=90)
    cout << "����:A\n" ;
  else if (score>=80)
    cout << "����:B\n" ;
  else if (score>=70)
	 cout << "����:C\n" ;
  else if (score>=60)
	 cout << "����:D\n" ;
  else 
     cout << "����:F\n" ; 
  system("pause");
  return 0;
 }

