#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  int i,j;
  struct tel_book
   {
    string name;
    int age;
    string tel;    
     
    void printdata(void)
     {
      cout << name << '\t'
           << age << '\t' 
           << tel << '\t' << endl;          
     }
   };
    
   struct tel_book telephone[3]={
     {"�i�T",18,"04-2321"},
     {"����",19,"06-2512"},
     {"���|",18,"02-2226"}};
    
   struct tel_book temp; // �Ȧstemp���c
   
   cout << "�Ƨǫe�����:" << endl ;    
   for (i=0;i<3;i++)
     telephone[i].printdata(); 
    
   for (i=1;i<=2;i++)//����2(=3-1)�ӨB�J
     for (j=0;j<3-i;j++)//��i�B�J,����3-i�����      
       if (telephone[j].age > telephone[j+1].age) 
         {            
          temp=telephone[j];   
          telephone[j]=telephone[j+1]; 
          telephone[j+1]=temp;
         }
   //�Y���䪺���>�k�䪺��ơA�h
   //�Ntelephone[j]�Ptelephone[j+1]��
   //�Ҧ����������e�����C
   cout << "�Ƨǫ᪺���:" << endl ;
   
   for (i=0;i<3;i++)    
     telephone[i].printdata();
  
  system("pause");
  return 0; 
 }
