#include <iostream>
#include <cstdlib>
using namespace std;
void printstar(int); 
void printstar(int , char);
int main()
 {
  cout << "�u���@�ӰѼƪ�printdata�禡�����G:\n" ;
  printstar(3);
  cout << "����ӰѼƪ�printdata�禡�����G:\n" ;
  printstar(3,'a');  
  system("pause");
  return 0;
 }

void printstar(int num)
 {
  int i,j;  
  for (i=0;i<num;i++)
   {
    for (j=1;j<=i+1;j++)
       cout << j;
      
    cout << '\n';
   }    
 }

void printstar(int num, char ch)
 {
  int i,j;  
  for (i=0;i<num;i++)
   {
    for (j=3-i;j>0;j--)
       cout << ch;
      
    cout << '\n';
   }    
 }
