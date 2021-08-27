//10*3矩陣、三科平均 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {  
  //宣告一個資料型態為fstream的資料輸入/輸出串流物件變數read_writefile
  //做為讀取/寫入檔案之用
  fstream read_writefile;  
 
  //以可讀取可寫入的開檔模式,開啟檔案animal.txt
  //新增的資料會寫到檔尾
  read_writefile.open("Score.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "Score.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  string Student;  
  int C,M,E;
  int m,n,k=1;
  int all[10][3];
  //int i
  //動態配置10*3的二維陣列ptr之記憶體
  float **ptr = new float *[10];
  for (m=0 ; m<10 ; m++)
    ptr[m] = new float [3];
  //動態配置10*3的二維陣列ptr之記憶體
    
  
  getline(read_writefile,Student) ;
  
  float total_C=0,total_M=0,total_E;
  int i;  
  for (i=1;i<=10;i++)
   {         
    read_writefile >> Student >> C >> M >> E ;
    if (read_writefile.fail())
      {
       cout << "讀取時,出現錯誤:\n" ;
       break;
      }
    total_C=total_C+C;
    total_M=total_M+M;  
	total_E=total_E+E;
	ptr[i-1][0] = C;
	ptr[i-1][1] = M;
	ptr[i-1][2] = E;  
	for (n=0 ; n<3 ; n++){
		//ptr[i-1][n]=C;
      	//k++;
    	cout << "ptr[" << i-1 << "][" << n << "]=" << ptr[i-1][n] << endl ; 
    	all[i-1][n] = ptr[i-1][n];
    	
	}
    	
   }
   for (i=1;i<=10;i++)
   {         
	for (n=0 ; n<3 ; n++){
    	cout<<all[i-1][n];
	}
    cout<<'\n';
   }

 

  //for (m=0 ; m<10 ; m++)

     
  //回收動態配置的二維陣列ptr之記憶體   
  for (m=0 ; m<10 ; m++)
    delete [] ptr[m];
  delete [] ptr; 
  ptr=NULL;
  //回收動態配置的二維陣列ptr之記憶體
  
   
  //設定顯示小數一位 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //設定顯示小數一位
  
  
  cout << ptr[1][2];
 
  cout << "全班國文平均:" << total_C/10
       << "\t全班數學平均:" << total_M/10
	   << "\t全班英文平均:" << total_E/10  << '\n' ;
      
  //將檔案的游標移到檔尾 
  read_writefile.seekg(0,ios::end) ; 

  
  
  
  
   	int W[3][1] = {6,4,3};
	int A[10][1] = {0,0,0,0,0,0,0,0,0,0};
	cout << "A = \n";
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				A[i][j]+=ptr[i][k]*W[k][j];
					
			}
			
		cout << A[i][j];
		cout<<"\n";
		}
		
	}    
  //清除read_writefile所代表的檔案之游標在檔尾的狀態      
  read_writefile.clear();
                  
  //關閉read_writefile所代表的檔案
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "Score.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
   
   


	
   
   
   
 
   
  
  system("pause");
  return 0;
 }

