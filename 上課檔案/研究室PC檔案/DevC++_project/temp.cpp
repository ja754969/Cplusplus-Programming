  
  //宣告一個資料型態為fstream的資料輸入/輸出串流物件變數read_writefile
  //做為讀取/寫入檔案之用
  fstream read_writefile2;  
 
  //以可讀取可寫入的開檔模式,開啟檔案
  //新增的資料會寫到檔尾
  read_writefile2.open("weight.txt",ios::in|ios::out);
  if (read_writefile2.fail())
   {
    cout << "weight.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  string weight;  
  int Cw,Mw,Ew;
  int m2,n2,k2=1;
  //int i
  //動態配置3x2的二維陣列ptr之記憶體
  float **ptr2 = new float *[1];
  for (m2=0 ; m2<1 ; m++)
    ptr2[m2] = new float [3];
  //動態配置3x2的二維陣列ptr之記憶體
    
  
  getline(read_writefile2,weight) ;
  
  //float total_C=0,total_M=0,total_E=0;
  int i2;  
  for (i2=1;i2<=2;i2++)
   {         
    read_writefile2 >> Cw >> Mw >> Ew ;
    if (read_writefile2.fail())
      {
       cout << "讀取時,出現錯誤:\n" ;
       break;
      }
    //total_C=total_C+C;
    //total_M=total_M+M;  
	//total_E=total_E+E;
	ptr2[i2-1][0] = Cw;
	ptr2[i2-1][1] = Mw;
	ptr2[i2-1][2] = Ew;  
	for (n2=0 ; n2<3 ; n++)
    	//ptr[i-1][n]=C;
      	//k++;
    	cout << "ptr2[" << i2-1 << "][" << n2 << "]=" << ptr2[i2-1][n2] << endl ; 
   }
   

 

  //for (m=0 ; m<10 ; m++)

     
  //回收動態配置的二維陣列ptr2之記憶體   
  for (m2=0 ; m2<1 ; m2++)
    delete [] ptr2[m2];
  delete [] ptr2; 
  ptr2=NULL;
  //回收動態配置的二維陣列ptr2之記憶體
  
   
  //設定顯示小數一位 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //設定顯示小數一位
 
  //將檔案的游標移到檔尾 
  read_writefile2.seekg(0,ios::end) ; 
  
      
  //清除read_writefile所代表的檔案之游標在檔尾的狀態      
  read_writefile2.clear();
                  
  //關閉read_writefile所代表的檔案
  read_writefile2.close();  
  if (read_writefile2.fail())
   {
    cout << "weight.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
   
  
  
    
  read_writefile << "國文平均:" << total_C/3
                 << "\t數學平均:" << total_M/3
				 << "\t英文平均:" << total_E/3 << '\n' ;
