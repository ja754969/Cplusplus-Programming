#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
namespace mynamespace
 {
  double abs(double);
 }

int main()
 {
  cout <<"-1.23�ϥ�std��abs�����G:" <<abs(-1.23) << endl;
  cout << "-1.23�ϥ�mynamespace��abs�����G:";
  cout <<mynamespace::abs(-1.23) << endl;
  system("PAUSE");
  return(0);
 }

double mynamespace::abs(double num)
 {
  if (num<0)
    return -1*num;
  else
    return num;
 }
