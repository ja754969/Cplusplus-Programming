#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
 int num,i,tbyte;
 cout << "輸入要動態配置多少個字串:" ;

 cin >> num;
 
 //動態配置num x tbyte的二維陣列ptr之記憶體
 char **ptr = new char *[num];
 for (i=0 ; i<num ; i++)
   {
    cout << "輸入第" << i+1 << "個字串要配置多少個字元:" ;
    cin >> tbyte ;
    ptr[i] = new char [tbyte];
    //動態配置num x tbyte的二維陣列ptr之記憶體
  
  
    cout << "輸入第"<< i+1 << "個字串的內容:";
    cin >> ptr[i] ;//cin輸入字串中間不可空白 
   }

  for (i=0 ; i<num ; i++)
    cout << "第" << i+1 << "個字串的內容:" 
        << ptr[i] << endl ;
   
     
  //回收動態配置的二維陣列ptr之記憶體   
  for (i=0 ; i<num ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //回收動態配置的二維陣列ptr之記憶體
    
  system("PAUSE");
  return 0; 
 }
