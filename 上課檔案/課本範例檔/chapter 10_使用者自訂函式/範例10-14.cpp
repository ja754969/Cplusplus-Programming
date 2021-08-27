#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void hanoi(int,int,int,int);
int main()
 {
  int n;
  cout << "��J�e����C��(Tower of Hanoi)�������Ӽ�:" ;
  cin >> n ;

  //�Nn�Ӷ����q��v1�g�Ѥ�v2�h���v3
  hanoi(n,1,3,2);

  system("pause");
  return 0;
 }

void hanoi(int circle,int source,int target,int temp)
 {
  static int no=1;
  if (circle>=2)
   {
    //�N(circle-1)�Ӷ���
    //�q�ӷ���v�g�ѥت���v�h��L���v
    hanoi(circle-1,source,temp,target);
   
    cout << "��" << setw(3) << no++ << "��:����" 
         << circle << " �q �W�l" << source 
         << "�h�� �W�l" << target << '\n' ;

    //�N(circle-1)�Ӷ���
    //�q�L���v�g�Ѩӷ���v�h��ت���v
    hanoi(circle-1,temp,target,source);
   }
  else
   {
    cout << "��" << setw(3) << no++ << "��:����" 
         << circle << " �q �W�l" << source 
         << "�h�� �W�l" << target << '\n' ;
   }
 }
