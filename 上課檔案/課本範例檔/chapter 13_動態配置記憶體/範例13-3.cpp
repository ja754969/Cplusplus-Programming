#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
 int num,i,tbyte;
 cout << "��J�n�ʺA�t�m�h�֭Ӧr��:" ;

 cin >> num;
 
 //�ʺA�t�mnum x tbyte���G���}�Cptr���O����
 char **ptr = new char *[num];
 for (i=0 ; i<num ; i++)
   {
    cout << "��J��" << i+1 << "�Ӧr��n�t�m�h�֭Ӧr��:" ;
    cin >> tbyte ;
    ptr[i] = new char [tbyte];
    //�ʺA�t�mnum x tbyte���G���}�Cptr���O����
  
  
    cout << "��J��"<< i+1 << "�Ӧr�ꪺ���e:";
    cin >> ptr[i] ;//cin��J�r�ꤤ�����i�ť� 
   }

  for (i=0 ; i<num ; i++)
    cout << "��" << i+1 << "�Ӧr�ꪺ���e:" 
        << ptr[i] << endl ;
   
     
  //�^���ʺA�t�m���G���}�Cptr���O����   
  for (i=0 ; i<num ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //�^���ʺA�t�m���G���}�Cptr���O����
    
  system("PAUSE");
  return 0; 
 }
