#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {  
  string str;
  int length=0; //じ
  int digit=0; //ゅ计计
  int space=0; //フじ计
  int lowercase=0; //糶ゅ计
  int uppercase=0; //糶ゅ计
  int punctuation=0; //夹翴才腹计 
  int chinese=0; //いゅ计
  int i=0; //じ竚
  cout << "块﹃:" ;
  getline(cin,str) ; 
  //把σ3-2-1 块ンcin 
  
  while(str[i] !='\0' )
   {
    //ascii>127:いゅ┪ゅ
    if(isascii(str[i])== 0)
      {
       chinese++;
       i++;
       //いゅ(┪ゅ)2bytes璶簿じ
      }
    else if(isdigit(str[i])!= 0)
       digit++;
    else if(islower(str[i])!= 0)
       lowercase++;
    else if(isupper(str[i])!= 0)
       uppercase++;
    else if(ispunct(str[i])!= 0)
       punctuation++;
    else if(isspace(str[i])!= 0)
       space++;

    i++;
   }
  cout << "块﹃羆"
       << str.length() << '\n' ;
  cout << "1.いゅ(┪ゅ)Τ"
       << chinese << "\n" ;
  cout << "2.┰计Τ"
       << digit << "\n" ;
  cout << "3.糶璣ゅΤ"
       << lowercase << "\n" ;
  cout << "4.糶璣ゅΤ"
       << uppercase << "\n" ;
  cout << "5.夹翴才腹Τ"
       << punctuation << "\n" ;       
  cout << "6.フじΤ"
       << space << "\n" ;

  system("pause");    
  return 0;
 }	
