#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//郵局分公司類別
class postoffice
 {
  private:          
    int savings ; //個人的總存款
         
  public: 
    string name ;
    
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
    

    //查詢個人的存款餘額作業
    friend int look(postoffice &obj)
     {        
      return obj.savings ;      
     }       
   
    //類別 postoffice的解構元函式 
    ~postoffice( ) 
     { 
      cout << "動態產生的物件people之記憶體空間，"
           << "已被釋放並歸還給系統" << endl ; 
     }
 } ;
 
//郵局總公司類別 
class headpostoffice
 {
  private:          
    int savings ; //郵局的總存款
  public:   
    int savingslook(postoffice obj[] , int n) 
     {
      savings=0;
      int i;
      for (i=0 ; i<n ; i++)
         savings+=look(obj[i]);
      return  savings ;
     }
 };
 
int main()
 {
  class headpostoffice head ;  //郵局總公司類別物件

  //動態產生2個郵局分公司類別物
  class postoffice *people ;  
  people=new class postoffice[2] ;
     
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
            deposit=people[customer].save() ;            
         else
            cout << "輸入錯誤\n" ; 
         break;
      case 2:
         cout << "\t查詢存款餘額作業\n" ; 
         cout << "輸入存戶編號(0:0號存戶 1:1號存戶):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)             
           cout << people[customer].name
              << "存戶之存款餘額為" << look(people[customer])  
              << endl ; 
         else
           cout << "輸入錯誤\n" ; 
         break;
      case 3:
         cout << "\t郵局的總存款為"           
              << head.savingslook(people,2) << endl ;     
         break;
      default:
         cout << "輸入錯誤\n" ;   
     } 
   }
   
  
  delete [] people ;
  system("pause") ;
  return 0;
 }
