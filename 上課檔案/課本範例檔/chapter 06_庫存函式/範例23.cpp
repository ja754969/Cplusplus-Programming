#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  clock_t start_clock,end_clock;
  //��ƫ��A��clock_t
   
  int i;
  double sum=0.0;
  float spend;       
 
  start_clock=clock();
  //���o�{���q�}�l����즹���
  //�Ҹg�L���w����(ticks)

  for (i=1;i<=100000000;i++)
     sum+=i;

  end_clock=clock();
  //���o�{���q�}�l����즹���
  //�Ҹg�L���w����(ticks)

  spend =(double) (end_clock-start_clock)/CLK_TCK;
  //�p��1+2+3+....+100000000�Ҫ᪺�ɶ�
  //CLK_TCK�O�w�q�bctime�����`�ƦW�١A
  //��ȵ���1000�]�Ӻw����/�C��^
  //���HCLK_TCK�`�ơA�Y�i�o��Ҫ᪺���
  
  cout.precision(20); 
  //���ĺ�T���20�� 
  
  cout << "1+2+...+100000000=" << sum << '\n' ;
  
  cout.precision(3); 
  cout.setf(ios::fixed);
  //�p�Ʀ��3�� 
  
  cout << "�p��1+2+...+100000000�Ҫ᪺�ɶ�:"
       << spend << "��\n" ;

  system("pause");    
  return 0;
 }	
