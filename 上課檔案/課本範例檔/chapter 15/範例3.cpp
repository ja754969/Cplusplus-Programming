#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class postoffice
 {
  private:          
    int savings ; //�ӤH���`�s��
         
  public: 
    string name ;
    static int psavings ; //�l�����`�s��    
    
    //�L�Ѽƪ��غc���禡
    //�]�w�s���l�s�ڪ��B 
    postoffice()
     {
      savings = 0 ;      
     }     
    
    //�s���ڧ@�~�έp��ӤH���s�ھl�B 
    int save() 
     {
      cout << name <<"����/�p�j�z�n,\n" ;     
      cout << "�п�J�s(��)�ڪ��B(�t�ƪ�ܴ���):" ;     
      int money ;
      cin >> money ;   
     
      savings += money ;
      return money;
     }    
    
    //�p��l�����`�s�ھl�B 
    static void operate(int money) 
     {     
      psavings += money ;
     }

   //�d�߭ӤH���s�ھl�B�@�~
   int look()
    {        
     return savings ;      
    }     
   
 } ;
 
//�]�w�l��������l�`�s�ڪ��B
int postoffice::psavings =0 ;

int main()
 {
  class postoffice people[2] ;   
  int choose;
  int customer ;
  people[0].name="ù�N�L" ;   
  people[1].name="Logic-Lin" ;
  int deposit;
  while (1) 
   {
    cout << "1.�s(��)�ڧ@�~ 2.�d�߭ӤH���`�s�� 3.�d�߶l�����`�s�� 0.����:" ;
    cin >> choose ;    
    if (choose==0)
       break;
    switch(choose)
     {
      case 1:
         cout << "\t�s(��)�ڧ@�~\n" ;
         cout << "��J�s��s��(0:0���s�� 1:1���s��):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)
           {                
            deposit=people[customer].save() ;
            people[customer].operate(deposit);     
           }
         else
           cout << "��J���~\n" ; 
         break;
      case 2:
         cout << "\t�d�ߦs�ھl�B�@�~\n" ; 
         cout << "��J�s��s��(0:0���s�� 1:1���s��):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)             
           cout << people[customer].name
              << "�s�ᤧ�s�ھl�B��" << people[customer].look() 
              << endl ; 
         else
           cout << "��J���~\n" ; 
         break;
      case 3:
         cout << "\t�l�����`�s�ڬ�"           
              << postoffice::psavings << endl ;     
         break;
      default:
         cout << "��J���~\n" ;   
     } 
   }
   
  system("pause") ;
  return 0;
 }
