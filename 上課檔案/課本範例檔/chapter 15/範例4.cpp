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
    
    //���Ѽƪ��غc���禡
    //�]�w�s���l�s�ڪ��B 
    postoffice(string name)
     {
      this->name=name;
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
  class postoffice people1,people2("Logic-Lin") ;   
  int choose;
  int customer ;    
  people1.name="ù�N�L" ;
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
         cout << "��J�s��s��(1:1���s�� 2:2���s��):" ;         
         cin >> customer ;    
         if (customer==1)
           {                
            deposit=people1.save() ;
            people1.operate(deposit);     
           }
         else if (customer==2)
           {                
            deposit=people2.save() ;
            people2.operate(deposit);     
           }
         else
           cout << "��J���~\n" ; 
         break;
      case 2:
         cout << "\t�d�ߦs�ھl�B�@�~\n" ; 
         cout << "��J�s��s��(1:1���s�� 2:2���s��):" ;         
         cin >> customer ;    
         if (customer==1)
           cout << people1.name
                << "�s�ᤧ�s�ھl�B��" << people1.look() 
                << endl ; 
         else if (customer==2)             
           cout << people2.name
                << "�s�ᤧ�s�ھl�B��" << people2.look() 
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
