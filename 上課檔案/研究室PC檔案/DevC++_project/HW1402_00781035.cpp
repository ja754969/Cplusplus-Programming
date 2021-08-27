//一重指標、二維陣列 
#include <iostream>
#include <cstdlib>
#include <iomanip> 
using namespace std;
int main()
 { 
  int num[3][2] = {1,2,3,4,5,6};
  int *ptr;
  ptr = num[0]; 
  //取得num陣列第一個元素所在的記憶體位址給ptr儲存 
  //*ptr 間接存取num陣列第一個元素的記憶體位址的內容
  cout<<"num陣列第一個元素的記憶體位址的內容:"<<*ptr
  <<'\n'<<"num陣列第一個元素所在的記憶體位址"<<ptr<<"\n\n";
  
  for (int i=0;i<6;i++){
  	cout<<setw(10)<< *ptr;
  	//cout<<setw(10)<< num[i];
  	ptr++;
  } 
  //cout<<"\nnum陣列最後一個元素的記憶體位址的內容:"<<*ptr
  //<<'\n'<<"num陣列最後一個元素所在的記憶體位址"<<ptr<<'\n';
  cout << '\n';
  for (int i=0;i<6;i++){
  	cout<<setw(10)<< num[i];
  	ptr++;
  } 
  cout << '\n';
  //cout<<"\nnum陣列最後一個元素的記憶體位址的內容:"<<*ptr
  //<<'\n'<<"num陣列最後一個元素所在的記憶體位址"<<ptr<<'\n';
  
  system("pause");
  return 0;
 }
