#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n,i=1;
  float length=100,distance=0;
  cout << "��Jn:";
  cin >> n;
  while (i<=n)
   {
    distance = distance +length;
    length = length / 2;        
    distance = distance +length;
    i++;
   }
  distance = distance -length;
  cout << "��" << n 
       << "�����a�ɡA�y�g�L���Z��=" 
       << distance << '\n';
  cout << "�y��" << n 
       << "���ϼu������=" 
       << length << '\n';
  system("pause");
    
  return 0;
 }	
