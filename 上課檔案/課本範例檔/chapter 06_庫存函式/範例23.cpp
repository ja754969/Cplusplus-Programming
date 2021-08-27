#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  clock_t start_clock,end_clock;
  //戈篈clock_t
   
  int i;
  double sum=0.0;
  float spend;       
 
  start_clock=clock();
  //眔祘Α眖秨﹍磅︽ㄧ计
  //┮竒筁簑氮计(ticks)

  for (i=1;i<=100000000;i++)
     sum+=i;

  end_clock=clock();
  //眔祘Α眖秨﹍磅︽ㄧ计
  //┮竒筁簑氮计(ticks)

  spend =(double) (end_clock-start_clock)/CLK_TCK;
  //璸衡1+2+3+....+100000000┮丁
  //CLK_TCK琌﹚竡ctimeず盽计嘿
  //ㄤ单1000簑氮计/–
  //埃CLK_TCK盽计眔┮计
  
  cout.precision(20); 
  //Τ弘絋计20 
  
  cout << "1+2+...+100000000=" << sum << '\n' ;
  
  cout.precision(3); 
  cout.setf(ios::fixed);
  //计计3 
  
  cout << "璸衡1+2+...+100000000┮丁:"
       << spend << "\n" ;

  system("pause");    
  return 0;
 }	
