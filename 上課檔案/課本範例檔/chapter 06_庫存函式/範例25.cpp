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
  cout << "設定目前日期及現在時刻:\n" ;
  
  cout << "目前日期(格式: yy-mm-dd)為" ;
  cin >> new_date ;
  
  cout << "現在時刻(格式: hh:mm:ss)為" ;
  cin >> new_time ;
  
  new_date=date_parameter+new_date ;
  //將new_date的內容合併到date_parameter尾部 
  
  new_time=time_parameter+new_time ;
  //將new_time的內容合併到time_parameter尾部
  
  system(new_date.c_str());//設定目前日期
  //日期參數格式: date yy-mm-dd

  system(new_time.c_str());//設定現在時刻
  //時間參數格式: time hh:mm:ss

  cout << "設定後:\n" ;
  _strdate(current_date);
  // 將目前的日期以MM/DD/YY方式，
  //存入字串current_date內

  _strtime(current_time);
  //將目前的時間以HH：MM：SS方式，
  //存入字串current_time內

  cout << "目前日期:" << current_date << '\n' ;
  cout << "現在時刻:" << current_time << '\n';
   
  system("pause");    
  return 0;
 }	
