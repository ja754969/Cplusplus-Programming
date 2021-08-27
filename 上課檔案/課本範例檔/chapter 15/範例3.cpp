#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class postoffice
 {
  private:          
    int savings ; //個人的總存款
         
  public: 
    string name ;
    static int psavings ; //郵局的總存款    
    
    //無參數的建構元函式
    //設定存戶初始存款金額 
    postoffice()
     {
      savings = 0 ;      
     }     
    
    //存提款作業及計算個人的存款餘額 
    int save() 
     {
      cout << name <<"先生/小姐您好,\n" ;     
      cout << "請輸入存(提)款金額(負數表示提款):" ;     
      int money ;
      cin >> money ;   
     
      savings += money ;
      return money;
     }    
    
    //計算郵局的總存款餘額 
    static void operate(int money) 
     {     
      psavings += money ;
     }

   //查詢個人的存款餘額作業
   int look()
    {        
     return savings ;      
    }     
   
 } ;
 
//設定郵局的的初始總存款金額
int postoffice::psavings =0 ;

int main()
 {
  class postoffice people[2] ;   
  int choose;
  int customer ;
  people[0].name="羅吉林" ;   
  people[1].name="Logic-Lin" ;
  int deposit;
  while (1) 
   {
    cout << "1.存(提)款作業 2.查詢個人的總存款 3.查詢郵局的總存款 0.結束:" ;
    cin >> choose ;    
    if (choose==0)
       break;
    switch(choose)
     {
      case 1:
         cout << "\t存(提)款作業\n" ;
         cout << "輸入存戶編號(0:0號存戶 1:1號存戶):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)
           {                
            deposit=people[customer].save() ;
            people[customer].operate(deposit);     
           }
         else
           cout << "輸入錯誤\n" ; 
         break;
      case 2:
         cout << "\t查詢存款餘額作業\n" ; 
         cout << "輸入存戶編號(0:0號存戶 1:1號存戶):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)             
           cout << people[customer].name
              << "存戶之存款餘額為" << people[customer].look() 
              << endl ; 
         else
           cout << "輸入錯誤\n" ; 
         break;
      case 3:
         cout << "\t郵局的總存款為"           
              << postoffice::psavings << endl ;     
         break;
      default:
         cout << "輸入錯誤\n" ;   
     } 
   }
   
  system("pause") ;
  return 0;
 }
