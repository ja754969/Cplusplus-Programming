//10*3矩陣、三科平均 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型態為fstream的資料輸入/輸出串流物件變數read_writefile
  //做為讀取/寫入檔案之用
  fstream read_writefile;  
 
  //以可讀取可寫入的開檔模式,開啟檔案
  //新增的資料會寫到檔尾
  read_writefile.open("weight.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "weight.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  string weight;  
  int C,M,E;
  int m,n,k=1;
  //int i
  //動態配置3x2的二維陣列ptr之記憶體
  float **ptr2 = new float *[1];
  for (m=0 ; m<1 ; m++)
    ptr2[m] = new float [3];
  //動態配置3x2的二維陣列ptr之記憶體
    
  
  getline(read_writefile,weight) ;
  
  //float total_C=0,total_M=0,total_E=0;
  int i;  
  for (i=1;i<=2;i++)
   {         
    read_writefile >> C >> M >> E ;
    if (read_writefile.fail())
      {
       cout << "讀取時,出現錯誤:\n" ;
       break;
      }
    //total_C=total_C+C;
    //total_M=total_M+M;  
	//total_E=total_E+E;
	ptr2[i-1][0] = C;
	ptr2[i-1][1] = M;
	ptr2[i-1][2] = E;  
	for (n=0 ; n<3 ; n++)
    	//ptr[i-1][n]=C;
      	//k++;
    	cout << "ptr2[" << i-1 << "][" << n << "]=" << ptr2[i-1][n] << endl ; 
   }
   

 

  //for (m=0 ; m<10 ; m++)

     
  //回收動態配置的二維陣列ptr2之記憶體   
  for (m=0 ; m<1 ; m++)
    delete [] ptr2[m];
  delete [] ptr2; 
  ptr2=NULL;
  //回收動態配置的二維陣列ptr2之記憶體
  
   
  //設定顯示小數一位 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //設定顯示小數一位
 
  //將檔案的游標移到檔尾 
  read_writefile.seekg(0,ios::end) ; 
  
      
  //清除read_writefile所代表的檔案之游標在檔尾的狀態      
  read_writefile.clear();
                  
  //關閉read_writefile所代表的檔案
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "weight.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
   
  
  system("pause");
  return 0;
 }

