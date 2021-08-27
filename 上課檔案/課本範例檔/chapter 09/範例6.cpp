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
  cout <<"-1.23使用std的abs的結果:" <<abs(-1.23) << endl;
  cout << "-1.23使用mynamespace的abs的結果:";
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
