//10*3矩陣、三科平均 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;
//int Amean2(int,int,int,int,int); //宣告函示 
//int After_Weight_mean(int[],int[],int[],int,int,int); //宣告函示 
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
   
   cout << "\n10人的國英數成績(A~J) : \n";
   for (i=1;i<=10;i++)
   {         
	for (n=0 ; n<3 ; n++){
    	cout<<all[i-1][n]<<' ';
	}
    cout<<'\n';
   }

   //cout << ptr[1][2]; //確認ptr可被輸出 
	
  //for (m=0 ; m<10 ; m++)
    int W[3][1] = {6,4,3}; //權重 
	int A[10][1] = {0,0,0,0,0,0,0,0,0,0};//每人各科乘以權重的總和 
	cout << "\n每人的三科加權總和 = \n";
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				A[i][j]+=ptr[i][k]*W[k][j];
					
			}
			
		cout << A[i][j]<<'\n';
		cout<<"\n";
		}
		
	}
	
	
	
	
	
	
	
//	int After_Weight_mean(W,A,ptr,10,1,3);
	
	
	
	
	
	
	
	    
	int Amean[10][1];//每個人的總成績平均值
	cout << "\n每人的總成績平均值 = \n"; 
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
		    Amean[i][j] = A[i][j]/(6+4+3);
			cout << Amean[i][j]<<'\n';
			cout<<"\n";
		}
		
	}    
	//各科成績平均值
	int mean_all[3][1] = {total_C/10,total_M/10,total_E/10};
    cout << "全班國文平均:" << mean_all[0][0]
       << "\t全班數學平均:" << mean_all[0][1]
	   << "\t全班英文平均:" << mean_all[0][2]  << '\n' ;
	// 
	int V[3][1] = {0,0,0}; //各科成績的標準差
	cout << "\n各科成績的變異數 = \n"; 
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			for (k=0;k<10;k++){
				V[i][j] += pow(ptr[k][i]-mean_all[0][i],2)/10;
			}
		    
			cout << V[i][j]<<'\n';
			cout<<"\n";
		}
		
	}
	// 
	cout << "\n各科成績的標準差 = \n"; 
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			cout <<sqrt(V[i][j])<<'\n';
			cout<<"\n";
		}
	 	
	}   
	// 
	int temp;
	for (int i=1;i<=10-1;i++){ //步驟 1 2 3 4
		for (int j=0;j<10-i;j++) {//比較 4 3 2 1
			for (int k=0;k<3;k++){
				if (ptr[j][k]>ptr[j+1][k]){ //如果左邊資料比右邊大
				//那就將data[j]和data[j+1]的內容互換 
				temp = ptr[j][k];
				ptr[j][k]=ptr[j+1][k];
				ptr[j+1][k]=temp;	
				}	
			}
			
		} 
	}
	
	cout<<"排序後的三科資料:\n";
	for (int i=0;i<10;i++){
		for (int k = 0;k<3;k++){
		cout<<ptr[i][k]<<' ';
		
		}
		cout<<'\n';
	}
	
	
	
	int num[1][3]={0,0,0}; //組距內的人數(作為累加用) 
	int num2[1][3]={0,0,0}; //組距內的人數(做為正常使用) 
	cout<<"\n組距為10分的累加人數 : \n"<<"\tC\tM\tE\n";
	for (int m = 100;m>=10;m=m-10){
		for (int i=0;i<10;i++){
			for (int k = 0;k<3;k++){
				if (ptr[i][k] <= m-1 && ptr[i][k] >= m-10){
					num[0][k]+=1;
//					num2[0][k]+=1; 
				}
	             
				
			}

		}
	cout << m-10<<"~"<<m-1<<'\t'
	<<num[0][0]<<'\t'<< num[0][1]<<'\t'<< num[0][2]; //目標 : 10*3矩陣
//	num2[0][0]=0,num2[0][1]=0,num2[0][2] = 0;
	cout<<'\n';		
		
	}
	
	cout<<"\n組距為10分的人數分佈 : \n"<<"\tC\tM\tE\n";
	for (int m = 100;m>=10;m=m-10){
		for (int i=0;i<10;i++){
			for (int k = 0;k<3;k++){
				if (ptr[i][k] <= m-1 && ptr[i][k] >= m-10){
//					num[0][k]+=1;
					num2[0][k]+=1; 
				}
	             
				
			}

		}
	cout << m-10<<"~"<<m-1<<'\t'
	<<num2[0][0]<<'\t'<< num2[0][1]<<'\t'<< num2[0][2]; //目標 : 10*3矩陣
	num2[0][0]=0,num2[0][1]=0,num2[0][2] = 0; //歸零 
	cout<<'\n';		
		
	}
	
	
//  //宣告一個資料型為ofstream的資料串流輸出物件變數appendfile
//  //做為寫入檔案之用
//  ofstream appendfile;  
//  
//  cout << "\n\n要寫入資料的文字檔名稱:Score.txt\n" ;
//      
//  //以寫入的方式,開啟檔案test.txt,並將新增的資料寫到檔案尾部
//  appendfile.open("Score.txt",ios::app);
//  if (appendfile.fail())
//   {
//    cout << "Score.txt檔案無法開啟!\n" ;      
//    system("pause");
//    exit(1);//exit(1)函式作用為強迫結束程式
//   }  
//  
//  string data;  
//  cout << "輸入要寫入的資料(以Enter鍵作為結束):\n" ;  
//  getline(cin,data);
//  appendfile << data << '\n' ;
//  if (appendfile.fail())
//   {
//    cout << "寫入時,出現錯誤:\n" ;
//    exit(1);
//   }
//  
//  //關閉appendfile所代表的檔案
//  appendfile.close();  
//  if (appendfile.fail())
//   {
//    cout << "Score.txt檔案無法關閉!\n" ; 
//    system("pause");
//    exit(1);//exit(1)函式作用為強迫結束程式
//   }
     
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
  
  
  

      
  //將檔案的游標移到檔尾 
  read_writefile.seekg(0,ios::end) ; 

  
  
  
  


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
 
 
//註解快捷鍵: Ctrl+/ 
//int After_Weight_mean(int W2[][],int A2[][],int ptr[][],int pnum2,int nn,int kk){
//	int nn; //加權資料的行數(1) 
//	int pnum2; //Score.txt檔的列數(10) 
//	int kk; //加權資料的列數(3) 
//	int W2[kk][nn] = {6,4,3}; //權重 
//	int A2[pnum2][nn] = {0,0,0,0,0,0,0,0,0,0};//每人各科乘以權重的總和 
//	cout << "\n每人的三科加權總和 = \n"; //會出現10*1矩陣 
//	for (int i=0;i<pnum2;i++) {
//		for (int j=0;j<nn;j++){
//			for (int k=0;k<kk;k++){
//				C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
//				C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
//				C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
//				A2[i][j]+=ptr[i][k]*W2[k][j];
//				
//			}
//		
//		cout << A2[i][j]<<'\n';
//		cout<<"\n";
//		}
//	}
//	return A2;
//}
//
//int Amean2(int W2,int A2,int ptr,int pnum2,int nn){
//	int Amean2[pnum2][nn];//每個人的總成績平均值
//	cout << "\n每人的總成績平均值 = \n"; 
//	for (int i=0;i<pnum2;i++) {
//		for (int j=0;j<nn;j++){
//	    	//Amean2[i][j] = A[i][j]/(W2[0]+W2[1]+W2[2]);
//			//cout << Amean2[i][j]<<'\n';
//			//cout<<"\n";
//		}
//	
//	}
//}
    
