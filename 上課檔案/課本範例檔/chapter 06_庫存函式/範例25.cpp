#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {    
  string new_date;
  string date_parameter="date ";
  string new_time;
  string time_parameter="time ";
  char current_date[9],current_time[9];       
  cout << "�]�w�ثe����β{�b�ɨ�:\n" ;
  
  cout << "�ثe���(�榡: yy-mm-dd)��" ;
  cin >> new_date ;
  
  cout << "�{�b�ɨ�(�榡: hh:mm:ss)��" ;
  cin >> new_time ;
  
  new_date=date_parameter+new_date ;
  //�Nnew_date�����e�X�֨�date_parameter���� 
  
  new_time=time_parameter+new_time ;
  //�Nnew_time�����e�X�֨�time_parameter����
  
  system(new_date.c_str());//�]�w�ثe���
  //����ѼƮ榡: date yy-mm-dd

  system(new_time.c_str());//�]�w�{�b�ɨ�
  //�ɶ��ѼƮ榡: time hh:mm:ss

  cout << "�]�w��:\n" ;
  _strdate(current_date);
  // �N�ثe������HMM/DD/YY�覡�A
  //�s�J�r��current_date��

  _strtime(current_time);
  //�N�ثe���ɶ��HHH�GMM�GSS�覡�A
  //�s�J�r��current_time��

  cout << "�ثe���:" << current_date << '\n' ;
  cout << "�{�b�ɨ�:" << current_time << '\n';
   
  system("pause");    
  return 0;
 }	
