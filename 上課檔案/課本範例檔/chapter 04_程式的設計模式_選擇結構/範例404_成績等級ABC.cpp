#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  cout << "块Θ罿:" ;
  cin >> score ;
  if (score>=90)
    cout << "单:A\n" ;
  else if (score>=80)
    cout << "单:B\n" ;
  else if (score>=70)
	 cout << "单:C\n" ;
  else if (score>=60)
	 cout << "单:D\n" ;
  else 
     cout << "单:F\n" ; 
  system("pause");
  return 0;
 }

