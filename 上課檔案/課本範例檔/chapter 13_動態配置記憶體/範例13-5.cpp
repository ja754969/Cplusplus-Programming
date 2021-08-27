#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i;
  struct student
   {
    string name;
    int  age;
    string tel;
   };
   
  //動態配置有2個元素的一維結構陣列ptr之記憶體 
  struct student *ptr = new struct student [2];
  
  for (i=0 ; i<2 ; i++)
   {    
    cout << "輸入第" << i+1 << "個學生的名字:" ;  
    cin >> ptr[i].name ;
    cout << "年齡:" ;
    cin >> ptr[i].age ;
    cout << "電話:" ;
    cin >> ptr[i].tel ;
   }
   
  for (i=0 ; i<2 ; i++)
   {
    cout << "第" << i+1 << "個學生的名字:" 
         << ptr[i].name ;     
    cout << "\t年齡:" << ptr[i].age ;
    cout << "\t電話:" << ptr[i].tel << endl ; 
   }
   
  delete [] ptr;  //回收動態配置的一維結構陣列ptr之記憶體 
  ptr=NULL;
  system("PAUSE");
  return 0; 
 }
