#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//�l�������q���O
class postoffice
 {
  private:          
    int savings ; //�ӤH���`�s��
         
  public: 
    string name ;
    
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
    

    //�d�߭ӤH���s�ھl�B�@�~
    friend int look(postoffice &obj)
     {        
      return obj.savings ;      
     }       
   
    //���O postoffice���Ѻc���禡 
    ~postoffice( ) 
     { 
      cout << "�ʺA���ͪ�����people���O����Ŷ��A"
           << "�w�Q������k�ٵ��t��" << endl ; 
     }
 } ;
 
//�l���`���q���O 
class headpostoffice
 {
  private:          
    int savings ; //�l�����`�s��
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
  class headpostoffice head ;  //�l���`���q���O����

  //�ʺA����2�Ӷl�������q���O��
  class postoffice *people ;  
  people=new class postoffice[2] ;
     
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
            deposit=people[customer].save() ;            
         else
            cout << "��J���~\n" ; 
         break;
      case 2:
         cout << "\t�d�ߦs�ھl�B�@�~\n" ; 
         cout << "��J�s��s��(0:0���s�� 1:1���s��):" ;         
         cin >> customer ;    
         if (customer==0 || customer==1)             
           cout << people[customer].name
              << "�s�ᤧ�s�ھl�B��" << look(people[customer])  
              << endl ; 
         else
           cout << "��J���~\n" ; 
         break;
      case 3:
         cout << "\t�l�����`�s�ڬ�"           
              << head.savingslook(people,2) << endl ;     
         break;
      default:
         cout << "��J���~\n" ;   
     } 
   }
   
  
  delete [] people ;
  system("pause") ;
  return 0;
 }
