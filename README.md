[![hackmd-github-sync-badge](https://hackmd.io/TIuCkQYBQqqL0Rnt-jKgiA/badge)](https://hackmd.io/TIuCkQYBQqqL0Rnt-jKgiA)

{%hackmd SybccZ6XD %}
###### tags: `NTOU_1081` `程式語言` `C++`
# [C++_海大1081](https://drive.google.com/drive/u/2/folders/1ZZ636J5y98nIeNK8g27YVDdJ-hSw_SYo)
## 暑假
* [C++ 暑假自修(上)](https://hackmd.io/ppi2IBOMQwafCwIBAKhG6w)
* [C++ 暑假自修(下)](https://hackmd.io/xl1_MqYkRmid3_2l4WunLA)
## 課本
### [程式範例檔](https://drive.google.com/open?id=1sumQinImiQG37UEOnEhEgxzo10almILm)
## [CH1_課本範例](https://drive.google.com/open?id=1w3UDrNzaj1hAbVJowkSJ15dJ_VqrZT4q)
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  cout << "歡迎您來到程式設計C++的世界!" << endl ;
  system("pause");
  return 0; 
 }
```
```
歡迎您來到程式設計C++的世界!
```
## [CH2_C++的基本資料型態_課本範例](https://drive.google.com/open?id=1E6j1TwBEsQ0TQ7byog3MYqi7dpZbR1Dp)
### a++_後置型遞增運算子應用
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=a++ + b; //先處理c=a＋b;，然後再處理a++;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n'; 
 system("PAUSE");	
 return 0;
}
```
```
a=1 , c=1
```
### a- -_後置型遞減運算子應用
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=a-- + b; //先處理c=a＋b;，然後再處理a--;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n' ; 
 system("PAUSE");	
 return 0;
}
```
```
a=-1 , c=1
```
### ++a_前置型遞增運算子應用
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=++a + b; //先處理++a;，然後再處理c=a＋b;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n' ; 
 system("PAUSE");	
 return 0;
}
```
```
a=1 , c=2
```
### - -a_前置型遞減運算子應用
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=--a + b; //先處理--a;，然後再處理c=a＋b;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n' ; 
 system("PAUSE");	
 return 0;
}
```
```
a=-1 , c=0
```
## [CH3_基本輸出函式及輸入函式_課本範例](https://drive.google.com/open?id=1n9ODVSd_Lv3qq53S8QugayIvMEk4p16W)
### 範例3-2_ios_格式狀態旗標設定
| 語法| 功能 | 範例|結果 |
| -------- | -------- | -------- |--------- |
| cout.precision(n)| 精確度設定，設定整數和小數位數共n位| Text     |Column 3 |
| cout.precision(n)、cout.setf(ios::fixed)| 設定小數位數n位| Text |Column 3 |
|cout.precision(n)、cout.setf(ios::scientific)|設定小數位數n位，並且以科學記號表示| Text |Column 3 |
| setw(n)     | 寬度設定     | Text     |Column 3 |
```cpp=
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;
int main()
 { 
  string name="mike"; //參考7-1-3字串
  int age=28;
  char blood='A';
  float height=168.567;
  double money=1234567000;

  cout.precision(4);//設定整數資料1位或浮點數資料的小數位數1位
  //cout.setf(ios::fixed); //固定小數點後1位
  cout << "1234567890123456789012345678901234567890"
     << "1234567890\n"
     << "我的名字叫" << name
     << "\t今年" << age << "歲\n"
     << "血型是" << blood <<"\t身高"
     << setw(7) << height << "公分\t" ;
     
  cout.precision(6); //設定整數資料6位或浮點數資料的小數位數6位
  cout.unsetf(ios::fixed);  //固定小數點後1位
  cout.setf(ios::scientific); //浮點數以科學記號的方式
  cout << "銀行存款" << money << "元\n";
  
  system("pause");
  return 0;
 }
```
```
12345678901234567890123456789012345678901234567890
我的名字叫mike  今年28歲
血型是A 身高  168.6公分 銀行存款1.234567e+009元
```
### 3-3
```cpp=
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
 {  
  int num=1,i;         
  cout.fill('0') ;
  cout << setw(4) << num ; //以4Byte寬度顯示num
  cout.setf(ios::left) ; //資料靠左輸出 
  cout << setw(4) << num  << '\n' ;  
  system("pause");
  return 0;
 }
```
```
00011000
```
### 3-4
```cpp=

```
```

```
### 3-5
```cpp=

```
```

```
### 3-6
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int length,width;
  cout << "輸入長方形的長與寬:" ;
  cin >> length >> width;
  cout << "長為" << length 
       << ",寬為" << width
       << "的長方形面積=" << length * width
       << '\n' ;     
  
  system("pause");
  return 0;
 }
```
```
輸入長方形的長與寬:5
2
長為5,寬為2的長方形面積=10
```
### 3-7
```cpp=

```
```

```
### :+1:3-8
字元輸入函式
| 函式 |名稱 | 功能 | 需要的標頭檔 |
| -------- |-------- | -------- | -------- |
| getchar() |標準字元輸入函式 | 輸入一字元，並顯示在螢幕上，且按Enter鍵，才會將字元存入字元變數。 | #include <stdio.h> |
| getche() |非標準字元輸入函式 | 輸入一字元，並顯示在螢幕上(不需按Enter鍵)，將字元存入字元變數。   | #include <conio.h>  |
| getch() | 非標準字元輸入函式 |輸入一字元，不會顯示在螢幕上(不需按Enter鍵)，將字元存入字元變數。  | #include <conio.h>  |
| kbhit() | 非標準字元輸入函式 |輸入一字元，不會顯示在螢幕上(不需按Enter鍵)，將字元存入字元變數。  | #include <conio.h>  |
```cpp=
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
 {  
  char ch1,ch2,ch3;
  cout << "輸入一字元:" ;
  ch1 = getchar();
  cout << "輸入一字元:" ;
  ch2 = getche();
  cout << "\n輸入一字元:" ;
  ch3 = getch();
  cout << "\n輸入的字元為:"
       << ch1 << ch2 << ch3 << '\n' ;
  system("pause");
  return 0;
 }
```
```
輸入一字元:A
輸入一字元:B
輸入一字元:
輸入的字元為:ABC
```
### 3-9
```cpp=

```
```

```
## [CH4_程式的設計模式-選擇結構_課本範例](https://drive.google.com/open?id=1On7UkNs_9ErvT5-PaUzZHEnqfZalcpoq)
## [CH5_迴圈結構_課本範例](https://drive.google.com/open?id=1k4uj7TngGEeARGBjBBFYYbnf671f2Xvp)
### :+1:範例5-7_後測試迴圈結構(do...while)
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int money,choose;
  cout << "輸入投入的金額:" ;  
  cin >> money ;
  do
   {
    cout << "選擇飲料" 
         << "1.可樂(15元) 2.汽水(12元) 3.結束:" ;
    cin >> choose ;
    if (choose == 1)
      {
       if (money < 15)
         cout << "金額不夠買可樂.\n" ;
       else
         money= money-15;
      }
    else if (choose == 2)
      {
       if (money < 12)
         cout << "金額不夠買汽水.\n" ;
       else
         money= money-12;
      }
   }
  while(choose != 3); 
  
  system("pause");
  return 0;
 }
```
```
輸入投入的金額:60
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:2
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:2
金額不夠買汽水.
```
```
輸入投入的金額:60
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:2
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:3
```
### 範例5-9_倒金字塔
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
 	int i,j;
 	int layer;
 	cout << "輸入金字塔層數: ";
 	cin >> layer;
 	for (i = layer;i >= 1;i--){
 		for (j=0;j<=layer-i;j++)
 			cout << ' ';
 		
		for (j=1;j<=2*i-1;j++)
			cout << '*';
			
		cout << '\n';
	 }
 }
```
```
輸入金字塔層數: 10
 *******************
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *
```
### 範例5-11_密碼驗證
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,password; 
  for (i=1;i<=3;i++)
   {
    cout << ("輸入密碼:");
    cin >> password ;
    if (password==201910)
      {
       cout << ("密碼正確.\n");
       break;
      }
    else
      cout << ("密碼錯誤.\n");
   }    
   
  system("pause");
  return 0;
 }	
```
```
輸入密碼:201809
密碼錯誤.
輸入密碼:201910
密碼正確.
```
## W5 條件
### YEARS.cpp
輸入
4 Leap Year
100 Common Year
400 Leap Year
500 Common Year
800 Leap Year
1000 Common Year
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int year;  
  cout << "請輸入西元年份:" ;
  cin >> year ;   
  switch(year % 400) //年份為400的倍數
  {
	case 0:
  		cout << "西元" << year << "年是閏年\n" ;
  		break; // break for case 0(上) 
  	default:
  		switch(year % 4) //年份為4的倍數
		{
			case 0:
				switch(year % 100) //年份不為100的倍數
	    		{
	   			case 0:	
					cout << "西元" << year << "年不是閏年\n" ;
					break; // break for case 0 (內)
	    		default:
		 			cout << "西元" << year << "年是閏年\n" ;
	    		}
	    		break; // break for case0 (外)
    		default:
    	    	cout << "西元" << year << "年不是閏年\n" ; 
  		} 
  }

  system("pause");
  return 0;
 }
```
```
請輸入西元年份:100
西元100年不是閏年
```
### 作業1_商和餘數.cpp
```cpp=
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << a << "/" << b <<"的商為  "<<a/b <<"\n";
	cout << a << "/" << b <<"的餘數為"<<a%b <<"\n";
	system("pause");
	return 0;
}
```
```
a:9
b:4
9/4的商為  2
9/4的餘數為1
```
## W6 條件、迴圈
### W61.cpp
小考第 1 題
假設某百貨公司周年慶活動，購物滿 10,000 元送 1000 禮券，滿 20,000 元 2000 禮券，以此類推。寫一程式，輸入購物金額，輸出禮券金額。(宣告變數時請使用整數，程式運算結果為無條件捨去，最後請輸入購物金額 12345 元。)
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int bill;
	cout << "請輸入購物金 : ";
	cin >> bill;
	//cout.precision(0);     //設定小數位數0位 
    //cout.setf(ios::fixed); //設定小數位數0位 (四捨五入到整數) 
	cout << "禮券金額 : "<< (bill/10000)*1000<<" 元" << endl;
	system("pause");
    return 0;
}
```
```
請輸入購物金 : 112345
禮券金額 : 11000 元
```
### W62.cpp
小考第 2 題
已知 a=2+2 ， b=2*2 ，請寫一程式，判斷a是否等於b。(請使用“ if ”語法編寫程式，若結果為真請顯示“ 1 ”，若為假請顯示“ 0 ”。)
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int a=2+2,b=2*2;
	if(a == b){
		cout << "1"<< endl ;
	}
	else{
		cout << "0"<< endl ;
	}
	system("pause");
    return 0;
}
```
```
1
```
### W63.cpp
小考第 3 題
請寫一程式，判斷在xy座標軸中 ，( 2，-3 ) 位於第幾象限。(請使用“if、else ”編寫一巢狀選擇結構之程式。)
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int x = 2,y = -3;
	if (x > 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "位在第1象限" << endl; 
	}
	else if (x < 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "位在第2象限" << endl; 
	}
	else if (x < 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "位在第3象限" << endl; 
	}
	else if (x > 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "位在第4象限" << endl; 
	}
	else{
		cout << "錯誤" << endl;
	}
	system("pause");
    return 0;
}
```
```
(2,-3)位在第4象限
```
## W7 迴圈
### W71
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int i;
	int sum=0;
	for(i=1;i<=6;i++) 
		sum += i;
	cout << "1+2+...+6=" << sum << endl;
	system("pause");
	return 0;
}
```
```
1+2+...+6=21
```
### W72
```cpp=
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	int i;
	int sum = 0;
	int max;
	cout << "請輸入最大值";
	cin >> max; 
	for(i=1;i<=max;i++){
		sum += pow(i,2); //i^2
	}
	
	cout << "1到"<<max<<"平方和 " << sum << endl;
	system("pause");
	return 0;
}
```
```
請輸入最大值5
1到5平方和 55
```
### W73
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int a,b,answer;
  cout << "輸入a,b:" ;
  cin >> a >> b;
  while (1)
   {
    cout << a <<'+' << b << '=' ;
    cin >> answer;
    if (answer == a+b)
     {
      cout << "答對了!\n" ;
      break;
     }
    else
     cout << "答錯了!\n" ;
   }
  
  system("pause");
  return 0;
 }	
```
```
輸入a,b:5+6
5+6=10
答錯了!
5+6=11
答對了!
```
### W74_2a2b遊戲_期中會考
```cpp=
#include <iostream>
using namespace std;
int main() {
  int a1 = 2,a2 = 0,a3 = 1 ,a4 = 9; 
  int n,n1,n2,n3,n4;
  int A,B;
  while (A!= 4 && B!= 4){
  
  	cout << "請輸入一個四位數字 : ";
  	cin >> n;
  	n1 = int(n/1000);
  	n2 = int((n-n1*1000)/100);
  	n3 = int((n-n1*1000-n2*100)/10);
  	n4 = int(n-n1*1000-n2*100-n3*10);
  	//cout << n1 << n2 << n3 << n4;
  	A = 0;B = 0;
  	if (n1 == a1){
  		A+=1;
  	}
  	else if (n2 == a1||n3 == a1||n4 == a1){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n2 == a2){
  		A+=1;
  	}
  	else if (n1 == a2||n3 == a2||n4 == a2){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n3 == a3){
  		A+=1;
  	}
  	else if (n1 == a3||n2 == a3||n4 == a3){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n4 == a4){
  		A+=1;
  	}
  	else if (n1 == a4||n2 == a4||n3 == a4){
  		B+=1;
  	}
  	else{
  		
  	}
  	cout <<A<<"A"<<B<<"B\n";
  }
  cout <<"答對!"<< n1 << n2 << n3 << n4 << '\n';
  system("pause");
  return 0; 
}
```
### W75 while迴圈輸入字元_範例3
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {   
  int number=0;
  cout << "一個字元一個字元輸入(直到按Enter鍵才停止):";
  while (getche() != '\r')	
    number = number + 1;

  cout << "\n共輸入" << number << "個字元\n" ;

  system("pause");
  return 0;
 }	
```
### W76 販賣機_範例7
```cpp=
#include <iostream>
#include <cstdlib>
//後測試迴圈結構 
using namespace std;
int main()
 {
  int money,choose;
  cout << "輸入投入的金額:" ; 
  cin >> money ;
  do
   {
    cout << "選擇飲料" 
         << "1.可樂(15元) 2.汽水(12元) 3.結束:" ;
    cin >> choose ;
    if (choose == 1)
      {
       if (money < 15)
         cout << "金額不夠買可樂.\n";
       else
         money= money-15;
       cout << "剩餘金額: " << money << "\n"; 
      }
    else if (choose == 2)
      {
       if (money < 12)  
         cout << "金額不夠買汽水.\n" ;
       else
         money= money-12;
       cout << "剩餘金額: " << money << "\n"; 
      }
   }
  while(choose != 3);  //進入迴圈的條件
  
  system("pause");
  return 0;
 }	
```
```
輸入投入的金額:50
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
剩餘金額: 35
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:2
剩餘金額: 23
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:2
剩餘金額: 11
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
金額不夠買可樂.
剩餘金額: 11
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:1
金額不夠買可樂.
剩餘金額: 11
選擇飲料1.可樂(15元) 2.汽水(12元) 3.結束:3
```
### W77 金字塔_範例9
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
 int main(){
 	int i,j;
 	int layer;
 	cout << "輸入金字塔層數: ";
 	cin >> layer;
 	for (i = 1;i <= layer;i++){
 		for (j=1;j<=layer-i;j++)
 			cout << ' ';
 		
		for (j=1;j<=2*i-1;j++)
			cout << '*';
			
		cout << '\n';
	 }
 }
```
```
輸入金字塔層數: 7
      *
     ***
    *****
   *******
  *********
 ***********
*************
```
### HW_W71
![](https://i.imgur.com/PKToK90.png)
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int income,tax;
	cout << "請輸入綜合所得淨額:"; 
	cin >> income;
	if (income >= 0 && income <= 520000){
		cout << "應納稅額:" << income*0.05 - 0 << "元\n"; 
	} 
	else if (income >= 520001 && income <= 1170000){
		cout << "應納稅額:" << income*0.12 - 36400 << "元\n"; 
	}
	else if (income >= 1170001 && income <= 2350000){
		cout << "應納稅額:" << income*0.20 - 130000 << "元\n"; 
	}
	else if (income >= 2350001 && income <= 4400000){
		cout << "應納稅額:" << income*0.30 - 365000 << "元\n"; 
	}
	else if (income >= 4400001 && income <= 110000000){
		cout << "應納稅額:" << income*0.40 - 805000 << "元\n"; 
	}
	else if (income > 110000000){
		cout << "應納稅額:" << income*0.45 - 1305000 << "元\n"; 
	}
	else{
		cout << "負債\n";
	}
	system("pause");
	return 0;
} 
```
### HW_W72
![](https://i.imgur.com/UAeleDu.png)
```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int top = 20;
	int up = 3,down = 1;
	int crawl = 0;       //蝸牛爬行距離 
	int day = 0;
	while (crawl <  top){
		if ((crawl + up) < top){
			crawl = crawl + up - down;
			day += 1;
		}
		else if ((crawl + up) >= top){
			crawl += up;
			day += 1;
		} 
		else{
			day += 0;
		}
	}
	cout << "蝸牛爬到樹頂的天數 :" << day << endl;
	system("pause");
	return 0;
} 
```
## W8 迴圈
### W81 [小考2-1](https://drive.google.com/open?id=139tPmNLsBghqv7WH79n_XKhr7dKPaz5H)![](https://i.imgur.com/TxJ1OXQ.png)

```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int time;
	int cost;
	float hr;
	cout << "停車時數(hr) : ";
	cin >> hr;
    time = hr*60; 
	switch (time)
	{
		case 0 ... 60:
			cost = 30;
			break;
		case 61 ... 120:
			cost = 30 + 40;
			break;
		case 121 ... 180:
			cost = 30 + 40*2;
			break;
		case 181 ... 240:
			cost = 30 + 40*2 + 50;
			break;
		case 241 ... 300:
			cost = 30 + 40*2 + 50*2;
			break;
		default:
			cost = 30 + 40*2 + 50*2 + 60*((int) hr-4);
    }
	cout <<"停車時間 : "<<time <<"分鐘\n"
	     <<"停車費為 : "<<cost <<"元\n"; 
	system("pause");
	return 0;
} 
```
```
停車時數(hr) : 5.5
停車時間 : 330分鐘
停車費為 : 270元
```
### W82  [小考2-2](https://)![](https://i.imgur.com/l6ERyXP.png)

```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath>
using namespace std;
int main(){
	int pay = 50000;
	int total;
	for (int i=0;i<=19;i++){
		pay = pay * (1+0.01*i); 
	}
	cout << "20年後月薪為: " << pay <<"元\n"; 
	system("pause");
	return 0;
} 
```
```
20年後月薪為: 298637元
```
### W83  [小考2-3](https://)![](https://i.imgur.com/n8oKjrC.png)

```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int len=1000;
	int num = 0;
	while (len>=5){
		len -= 0.5*len;
		num += 1;
	}
	cout << "需要剪" << num << "次\n";  
	system("pause");
	return 0;
} 
```
```
需要剪8次
```
## W9 第1次期中考

## [CH6_庫存函式_課本範例](https://drive.google.com/open?id=1hwNxOpkvBgX1iDU5RerJRCA1ond1byIM)
## W10 庫存函式(11/12)
### W101 解方程式根

```cpp=
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double a,b,c,root1,root2;
  cout << "輸入方程式ax^2+bx+c=0的係數a,b,c:" ;
  cin >> a >> b >> c ;     
  root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  cout << "ax2+bx+c=0的根為" << root1
       << "及" << root2 << '\n';
  
  system("pause");    
  return 0;
 }	
```
```
輸入方程式ax^2+bx+c=0的係數a,b,c:1
-5
6
ax2+bx+c=0的根為3及2
```
### W102 跑馬燈

```cpp=
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {
  string letter="跑馬燈";
  int i=70,j; //i=61,表示文字I love C++ language.活動的寬度
  while (1)
   {
    //如果使用者按下任何按鍵，結束跑馬燈
    if (kbhit()!=0) //參考3-2-2 kbhit()函式說明
       break;

    //印I love C++ language.之前先印i格空白
    for (j=1;j<=i;j++)
      cout << ' ' ;
    cout << letter ;
    _sleep(250); //暫停0.25秒
    //請參考 6-6 停滯函式 _sleep()
    
    if (i>1)
      i--;
    else
      i=61;
    system("cls");
   }
  
  system("pause");    
  return 0;
 }	
```
跑馬燈的字會在範圍內跑來跑去
```
                    跑馬燈
```
### W103 空白字元判斷函式

```cpp=
#include <iostream>
#include <cstdlib>
#include <cctype> 
using namespace std;
main(){
	char ch;
	cout << "輸入字元";
	cin >> ch;
	if (isspace(ch) != 0){
		cout << ch << "是空白字元\n"; 
	}
	else{
		cout << ch << "不是空白字元\n";
	}
	system("pause");
	return 0;
}
```
```
輸入字元j
j不是空白字元
```
### W104 自訂大小的菱形

```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  int max;
  cout << "請輸入對稱值(奇數) : ";
  cin >> max;
  for (i=1;i<=max;i++)
   {
   	for (j=1;j<=abs(i-(max+1)/2);j++){
   		cout << " ";
	   }
    for (j=1;j<=max-2*abs(i-(max+1)/2);j++)
      cout << '*' ;
    cout << '\n';
   }
  
  system("pause");    
  return 0;
 }	
```
```
請輸入對稱值(奇數) : 19
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
```
### W105 字元大寫轉換函式

```cpp=
#include <iostream>
#include <cstdlib>
#include <cctype> 
using namespace std;
main(){
	char ch1,ch2;
	cout << "輸入英文字元 : ";
	cin >> ch1;
	ch2 = toupper(ch1);
	cout << ch1 << "的大寫為" << ch2 << '\n';
	
	system("pause");
	return 0; 
}
```
```
輸入英文字元 : d
d的大寫為D
```
### [第10周作業](https://drive.google.com/open?id=1eqcw3uhWq-qlTCUCWGIfVjZFKdPv0s9I)
#### HW101_00781035

```cpp=
//寫一程式，輸入一整數，判斷此數否為某一個整數的平方。
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  int it;
  double root;
  cout << "請輸入一個整數 : ";
  cin >> it;     
  root = sqrt(it);
  if (root - int(root) == 0){
  	cout << "正確\n"<<it<< "是" << root <<"的平方\n"; 
  }
  else{
  	cout << "錯誤\n"<<it<<"的根不是整數，是" << root << '\n';
  }
  
  
  system("pause");    
  return 0;
 }	 	 
```
```
請輸入一個整數 : 2048
錯誤
2048的根不是整數，是45.2548
```
#### HW102_00781035

```cpp=
//寫一程式，輸出下列對稱圖形。
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  int i,j;
  int max;
  cout << "請輸入對稱最大值(偶數) : ";
  cin >> max;
  for (i=1;i<=max-1;i++)
   {
   	for (j=1;j<=abs(1-(max)/2)-abs(i-(max)/2);j++){
		cout << " " ;
	}
   	for (j=1;j<=2*(abs(i-(max/2))+1);j++){
   		cout << "*";
	}
    cout << '\n';
   }
  
  system("pause");    
  return 0;
 }	
```
```
請輸入對稱最大值(偶數) : 8
********
 ******
  ****
   **
  ****
 ******
********
```
## [CH7_陣列_課本範例](https://drive.google.com/open?id=1DhTU7nE6IIoD59qNAXFMj9nnz8D-Cake)
## W11 陣列(11/19)
### W1101 

```cpp=
//範例7-2 以陣列方法計算一周7天的總花費 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int m[7],total = 0; //m[0]、m[1]、...、m[6]
	for (int i = 0;i<7;i++){
		cout << "輸入星期" << i+1 << "的花費 :　";
		cin >> m[i];
		total = total +m[i];
		 
	}
	cout << "一星期總花費 :　"<<total << '\n';
	
	system("pause");
	return 0; 
}
```
```
輸入星期1的花費 :　400
輸入星期2的花費 :　200
輸入星期3的花費 :　800
輸入星期4的花費 :　900
輸入星期5的花費 :　1000
輸入星期6的花費 :　500
輸入星期7的花費 :　6000
一星期總花費 :　9800
```
### W1102 
==getch( )== 輸入一字元，不會顯示在螢幕上(不需按Enter鍵)，將字元存入字元變數。
```cpp=
//範例14-3 以陣列儲存密碼
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int i;
	char password[8]; //最多儲存7位字元密碼
	cout << "輸入密碼(最多7位) :　";
	for (i=0;i<7;i++){
		password[i] = getch();
		if (password[i]=='\r'){  //'\r'表示歸位鍵(Enter鍵)
			break;
		} 
		cout << '*';
		
	}
	
	password[i]='\0'; //使password成為字串
	
	cout << "\n輸入文字密碼為"<<password<<'\n'; 
	
	system("pause");
	return 0; 
}
```
```
輸入密碼(最多7位) :　*******
輸入文字密碼為a1b2c3d
```
### W1103 ([小考](https://tronclass.ntou.edu.tw/course/56441/learning-activity#/144970))
求矩陣C = A*B 
A=[1 2 3;4 5 6;7 8 9],B=[3;7;10]
```cpp=
/*
求矩陣C = A*B 
A=[1 2 3;4 5 6;7 8 9],B=[3;7;10]
*/
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //
	int B[3][1] = {3,7,10};
	int C[3][1] = {0,0,0};
    cout << "C = \n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				C[i][j]+=A[i][k]*B[k][j];
					
			}
			
		cout << C[i][j];
		cout<<"\n";
		}
		
	}

	
	system("pause");
	return 0; 
}
```
```
C = 
47
107
167
```
### W1104_基本二維陣列
C++的矩陣是從==列方向==排序
```cpp=
/*
基本二維陣列
C++的矩陣是從列方向排序
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int num[3][2] = {1,2,3,4,5,6};
    cout << "C = \n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<2;j++){
			cout << num[i][j];
			cout<<" ";
			}
		cout<<"\n";
		}
		
	
  system("pause");
  return 0;
 }
```
```
C =
1 2 
3 4
5 6
```
## W12 陣列 (11/26)
### W1201_資料排序 
```cpp=
/*範例7-4 氣泡排序法
n個資料從小排到大，最多需要(n-1)個步驟
步驟1到步驟n-1所需要的比較次數總和是n*(n-1)/2
步驟1要比較n-1次
步驟2要比較n-2次
...
步驟n-1要比較n-(n-1)次*/ 
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,j;
	int temp;
	//int n
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout<<"排序前的資料:";
	for (i=0;i<n;i++){
		cout<<data[i]<<' ';
		
	}
	cout<<'\n';
	for (i=1;i<=n-1;i++){ //步驟 1 2 3 4
		for (j=0;j<n-i;j++) {//比較 4 3 2 1
			if (data[j]>data[j+1]){ //如果左邊資料比右邊大
				//那就將data[j]和data[j+1]的內容互換 
				temp = data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
				
			}
		} 
	}
	
	cout<<"排序後的資料:";
	for (i=0;i<n;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	
	system("pause");
	return 0; 
}
```
```
請輸入資料筆數 : 5
輸入第1筆資料 :　12
輸入第2筆資料 :　6
輸入第3筆資料 :　3
輸入第4筆資料 :　26
輸入第5筆資料 :　58
排序前的資料:12 6 3 26 58
排序後的資料:3 6 12 26 58
```
### W1202_線性搜尋法 
```cpp=
/*範例7-5 線性搜尋法
搜尋n個資料中的特定資料 
優點 : 資料不需要排序
缺點 : 效率差，平均需要做(n+1)/2次的判斷*/ 
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //線性搜尋法 
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,num;
	//int n
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout << "輸入要搜尋的資料 : ";
	cin >> num;
	
	for (i=0;i<n;i++){
		if (num==data[i]){
			cout<<num<<"位於資料中的第"<<i+1<<"個位置\n";
			break; 
		}
		
	} 
	
	if (i==n){  // 如果以上條件都不符合，i 最後會變成n 
		cout<<num<<"不在資料中\n";
	}	
		
	system("pause");
	return 0; 
}
```
```
請輸入資料筆數 : 5
輸入第1筆資料 :　12
輸入第2筆資料 :　26
輸入第3筆資料 :　58
輸入第4筆資料 :　61
輸入第5筆資料 :　9
輸入要搜尋的資料 : 26
26位於資料中的第2個位置
```
```
請輸入資料筆數 : 6
輸入第1筆資料 :　15
輸入第2筆資料 :　19
輸入第3筆資料 :　3
輸入第4筆資料 :　73
輸入第5筆資料 :　85
輸入第6筆資料 :　63
輸入要搜尋的資料 : 45
45不在資料中
```
### W1203_二分搜尋
```cpp=
/*範例7-6 二分搜尋法
缺點 : 資料必須先排序，再搜尋
優點 : 效率高，平均做(1+log2n)/2次的判斷*/ 
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //二分搜尋 : 省時，從中間開始比 
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int num;
	int left,middle,right;
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout<<"輸入要搜尋的資料 : ";
	cin >> num;
	left=0;
	right=n-1;
	
	while (left<=right){
		middle = (left+right)/2;
		if (num==data[middle]){ //以middle值和要搜尋的資料做比較
			break;
		}
		else if (num > data[middle]){
			left=middle+1; //讓middle值偏往右手邊(變大) 
		}
		else{
			right=middle-1;//讓middle值偏往左手邊(變小) 
		}
	}
	
	if (left<=right){
		cout<<num<<"位於資料中的第"<<middle+1<<"個位置\n";
		// middle+1 是視覺上的位置 
	} 
	else{
		cout<<num<<"不在資料中\n";
		
	}
	
	system("pause");
	return 0; 
}
```
```
請輸入資料筆數 : 7
輸入第1筆資料 :　7
輸入第2筆資料 :　5
輸入第3筆資料 :　12
輸入第4筆資料 :　26
輸入第5筆資料 :　16
輸入第6筆資料 :　85
輸入第7筆資料 :　71
輸入要搜尋的資料 : 85
85位於資料中的第6個位置
```
```
請輸入資料筆數 : 4
輸入第1筆資料 :　62
輸入第2筆資料 :　15
輸入第3筆資料 :　19
輸入第4筆資料 :　37
輸入要搜尋的資料 : 20
20不在資料中
```

## W13 陣列、指標 (12/03)
### W1301_數學四則運算回答
```cpp=
//範例7-29 數學四則運算回答 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
 { 
  int num1,num2;
  int result,answer;
  //result : 解答
  //answer : 回答 
  char op; 
  //op : 運算子符號 
  
  srand((unsigned) time(NULL));
  //將目前時間轉換成無符號整數
  
  cout<<"回答數學四則運算 : \n";
  num1 = 1+rand()%100; //產生介於1到100之間的亂數資料 
  num2 = 1+rand()%100;
  
  switch (1+rand()%4){ //產生1到4之間的整數亂數資料 
  	case 1: //如果是 1 ，指定op為加(+)  
  		op = '+';
  		result = num1+num2;
  		break;
	case 2: //如果是 2 ，指定op為減(-) 
		op = '-';
		result = num1-num2;
		break;
	case 3: //如果是 3 ，指定op為乘(*) 
		op = '*';
		result = num1*num2;
		break;
	case 4: //如果是 4 ，指定op為除(/) 
		op = '/';
		result = num1/num2;
		break;
  } 
  cout<<num1<<op<<num2<<'=';
  cin>>answer;
  
  if (answer==result){
	cout<<"答對\n";
	
  }
  else{
  	cout<<"答錯\n";
  }
```
```
回答數學四則運算 :
25*96=24
答錯
```
## [CH8_指標_課本範例](https://drive.google.com/open?id=1KmX4B4SWNPDWiMnOx4W45lQ_giEZNYWg)
### 第8章 參考Codecademy (指標) : https://hackmd.io/xl1_MqYkRmid3_2l4WunLA#%E3%80%90References-and-Pointers%E3%80%91Pointers
參考(References)和指標(Pointers)能讓程式設計師直接操控記憶體

A memory address is usually denoted in ==hexadecimal== instead of binary for readability and conciseness.

```cpp=
#include <iostream>

int main() {
  
  int soda = 99;
  int &pop = soda; //a reference to soda.
  pop += 1;
  std::cout << soda <<"\n" << pop << "\n";
}
```
```
100
100
```
記憶體位址長這樣 : 0x6ffe34
記憶體位址長這樣 : 
### W1302_一重指標 
```cpp=
//範例8-1 一重指標 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
 { 
  int var,*ptr;
  ptr = &var; //ptr所指向的記憶體位址 
  //取得變數var所在的記憶體位址給ptr儲存 
  //*ptr 間接存取變數var的記憶體位址的內容
  // *ptr 其實就是 var 啦
  
  var=5;
  *ptr=*ptr+2;//ptr所指向的記憶體位址內的資料改變，var的資料也隨之改變 
  cout<<"var="<<var<<'\n';
  cout<<"*ptr="<<*ptr<<'\n';
  cout<<"ptr="<<ptr<<'\n';
  
  
  system("pause");
  return 0;
 }
```
```
var=7
*ptr=7
ptr=0x6ffe34
```
### W1303_一重指標、三維陣列 
```cpp=
//範例8-4 一重指標、三維陣列 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
 { 
  int num[2][3][2] = {-1,3,1,6,4,7,0,1,2,-5,9,11};
  int *ptr;
  ptr = &num[0][0][0]; 
  //取得num陣列第一個元素所在的記憶體位址給ptr儲存 
  //*ptr 間接存取num陣列第一個元素的記憶體位址的內容
  
  for (int i=0;i<12;i++){
  	cout<<setw(5)<< *ptr;
  	ptr++;
  } 
  cout << '\n';
  //cout<<'\n'<< num <<'\n'<<*ptr<<'\n'<<ptr;
  
  system("pause");
  return 0;
 }
```
```
   -1    3    1    6    4    7    0    1    2   -5    9   11
```
### W1304_取得指標變數的內容 
```cpp=
//範例8-7  取得指標變數的內容 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include <string> 
using namespace std;
int main()
 { 
  int i,j;
  char *name[3]={"小哈","中哈","大哈"};
  char *temp;
  cout << "排序前:";
  for (i=0;i<3;i++){
  	cout<<name[i]<<' ';
  }
  cout<<"\n";
  
  for (i=1;i<=2;i++){
  	for (j=0;j<3-i;j++){
  		if ((string) name[j] > (string) name[j+1]){
  			temp = name[j];
  			name[j] = name[j+1];
  			name[j+1] = temp;
		  }
	  }
  }
  cout<<"排序後:";
  for (i=0;i<3;i++){
  	cout<<name[i]<<' ';
  } 
  cout<<"\n";
  
  
  system("pause");
  return 0;
 }
```
```
排序前:小哈 中哈 大哈
排序後:大哈 小哈 中哈
```
## [CH10_使用者自訂函式_課本範例](https://drive.google.com/open?id=1BVcO7bG5E-opAOe4QubWfHKHasGoKlWm)
## W14 使用者自訂函式(12/10)
### W1401_攝氏轉華氏 (有回傳值)
```cpp=
//範例10-4 攝氏轉華氏 
#include <iostream>
#include <cstdlib>
using namespace std;
float ttransform(float);
int main(){ 
  float c;
  cout << "輸入攝氏溫度 :　";
  cin >> c;
  
  cout.precision(1);
  cout.setf(ios::fixed);
  
  cout << "攝氏"<<c<<"度等於華氏"<<ttransform(c)<<"度\n";
   
  
  
  system("pause");
  return 0;
 }
 
 float ttransform(float c){
 	c=c*9/5+32;
 	return c;
 }
```
```
輸入攝氏溫度 :　20
攝氏20.0度等於華氏68.0度
```
### W1402_加總函數 (有回傳值)
```cpp=
//範例10-3 加總函數 
#include <iostream>
#include <cstdlib>
using namespace std;
int sum(int,int,int); //頭，尾，間隔值 
int main(){ 
  cout<<"1+2+...+9+10="<<sum(1,10,1)<<'\n';
  cout<<"1+3+...+97+99="<<sum(1,99,2)<<'\n';
  cout<<"4+7+...+97+99="<<sum(4,99,3)<<'\n';
   
  system("pause");
  return 0;
 }
 
 int sum(int m,int n,int add){ //定義函式 
	int i,total=0;
	for (i=m;i<=n;i=i+add){
		total=total+i;
	}
 	return total;
 }
```
```
1+2+...+9+10=55
1+3+...+97+99=2500
4+7+...+97+99=1616
```
### W1403_轉置矩陣(法二) 
```cpp=
//範例10-9 轉置矩陣 
#include <iostream>
#include <cstdlib>
using namespace std;
void transpose(int *,int,int); //宣告 
int main(){ 
  int num[2][3];
  cout << "輸入2*3矩陣:\n";
  for (int i=0;i<2;i++){
  	for (int j=0;j<3;j++){
  		cout << "第"<<i+1<<"列，第"<<j+1<<"行的值 : ";
		cin>>num[i][j];
		 
	  }
	  
  }
  cout<<"原始的2*3矩陣 : \n";
  for (int i=0;i<2;i++){
  	for (int j=0;j<3;j++){
  		cout<<num[i][j];
	  }
	cout<<'\n';
  }
  
  transpose(&num[0][0],2,3);
  
  system("pause");
  return 0;
 }
 
 void transpose(int *d,int m,int n){ //定義函式
 //*d : 接收陣列第一個元素的起始位置
 //m : 儲存陣列的列個數
 //n : 儲存陣列的行個數 
	int i,j;
	cout << "轉置後變成3*2矩陣 : \n";
	for (j=0;j<n;j++){      //0~n-1 
		for (i=0;i<m;i++){  //0~m-1
			cout << *(d+i*n+j); //*(d+i*n+j)代表num[i][j] 
		}
		cout << '\n';
	}
 }
```
```
輸入2*3矩陣:
第1列，第1行的值 : 2
第1列，第2行的值 : 4
第1列，第3行的值 : 6
第2列，第1行的值 : 1
第2列，第2行的值 : 3
第2列，第3行的值 : 5
原始的2*3矩陣 :
246
135
轉置後變成3*2矩陣 :
21
43
65
```
### W1404_轉置矩陣(法一)
|| 法1 | 法2 |
| -------- | -------- | -------- |
|  宣告語法  |函式型態 函式名稱(參數型態 [ ][n],int);|函式型態 函式名稱(參數型態 * ,int,int);|
| 定義語法 | 函式型態 函式名稱(參數型態 陣列名稱[ ][n],int m); |函式型態 函式名稱(參數型態 *指標名稱[][n],int m,int n);|
| 符號意義 | m : 用來儲存第一維元素個數, n : 用來存第二維元素個數 |m : 用來儲存第一維元素個數, n : 用來儲存第二維元素個數, 指標名稱用來接收第1個元素的起始位址|
```cpp=
//範例10-8 轉置矩陣 
#include <iostream>
#include <cstdlib>
using namespace std;
void transpose(int [][3],int); //宣告函式
int main()
 {
  int num[2][3],i,j;
  cout << "輸入2x3矩陣:\n";
  for (i=0;i<2;i++)
    for (j=0;j<3;j++)
    {
     cout << "第" << i << "列,第" << j << "行的值:" ;
     cin >> num[i][j] ;
    }
  cout << "原始的2x3矩陣:\n" ;
  for (i=0;i<2;i++)
   {
    for (j=0;j<3;j++)
      cout << num[i][j] ;
    cout << '\n' ;
   }

  transpose(num,2);

  system("pause");
  return 0;
 }

void transpose(int d[][3],int m) //定義函式
 {
  int i,j;
   cout << "轉置後變成3x2矩陣:\n" ;
  for (j=0;j<3;j++)
   {
    for (i=0;i<m;i++)
      cout << d[i][j] ;
    cout << "\n" ;
   }
 }  
```
```
輸入2x3矩陣:
第0列,第0行的值:1
第0列,第1行的值:2
第0列,第2行的值:3
第1列,第0行的值:4
第1列,第1行的值:5
第1列,第2行的值:6
原始的2x3矩陣:
123
456
轉置後變成3x2矩陣:
14
25
36
```
### W1405_找最大函式(指標法)
```cpp=
//範例10-7 找出輸入的整數中最大者
#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int *,int); //宣告函式
int main()
 {
  int num[5],i;
  for (i=0;i<5;i++)
   {
    cout <<"輸入第" << i+1 << "個整數:" ;
    cin  >> num[i] ;
   }  
  cout << "最大者=" << biggest(&num[0],5) << '\n';
  system("pause");
  return 0;
 }
int biggest(int *d,int n) //定義函式
 {
  int i,big;
  big=*d;
  for (i=1;i<n;i++)
    if (big<*(d+i))
     big=*(d+i);

  return big;
 }
```
```
輸入第1個整數:4
輸入第2個整數:6
輸入第3個整數:9
輸入第4個整數:7
輸入第5個整數:81
最大者=81
```
### W1406_找最大函式
```cpp=
//範例10-6
#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int [],int); //宣告函式
int main()
 {
  int num[5],i;
  for (i=0;i<5;i++)
   {
    cout <<"輸入第" << i+1 << "個整數:" ;
    cin  >> num[i] ;
   }
  cout << "最大者=" << biggest(num,5) << '\n'; //呼叫函式

  system("pause");
  return 0;
 }

int biggest(int d[],int n) //定義函式
 {
  int i,big;
  big= d[0]; //先把第一個元素d[0]當作最大
  for (i=1;i<n;i++)
    if (big<d[i]) //如果接下來的一個元素d[i]比目前的big大
     big= d[i]; //以d[i]取代big的王位

  return big;
 }
```
```
輸入第1個整數:4
輸入第2個整數:5
輸入第3個整數:16
輸入第4個整數:68
輸入第5個整數:42
最大者=68
```
## [W14作業4](https://drive.google.com/open?id=1ntJ-YuroYAV1ji4Rex0v8lete6uAG0DO)![](https://i.imgur.com/yJlIbBG.png)

### W14_HW_01
```cpp=
//圓內
#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include <cmath>
using namespace std;
int main()
 { 
  int c[6][2] = {{2,1},{2,-1},{3,3},
  {5,0},{1,-7},{0,-2}};
  //c = {{2,1},{2,-1},{3,3},{5,0},{1,-7},{0,-2}};
  int ox = 0,oy = 0; //圓心
  
  cout<<"在圓內(上)的座標點 :";
  for (int x=0;x<=5;x++){
  	if (sqrt(c[x][0]*c[x][0]+c[x][1]*c[x][1])<=sqrt((3-0)*(3-0)+(3-0)*(3-0))){
  			cout<<setw(5)<<"("<<c[x][0]<<","<<c[x][1]<<")";
	}
  }
  cout<<'\n';
  
  system("pause");
  return 0;
 }
```
```
在圓內(上)的座標點 :    (2,1)    (2,-1)    (3,3)    (0,-2)
```
### W14_HW_02
```cpp=
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
```
```
num陣列第一個元素的記憶體位址的內容:1
num陣列第一個元素所在的記憶體位址0x6ffe10

         1         2         3         4         5         6
  0x6ffe10  0x6ffe18  0x6ffe20  0x6ffe28  0x6ffe30  0x6ffe38
```
### W14_HW_03
```cpp=
#include <iostream>
#include <cstdlib>
using namespace std;
 int main(){
 	int num[25] = {6,7,8,9,10,11,12,13,14,
	 15,16,17,18,19,20,21,22,23,24,25,26,27,
	 28,29,30}; 
 	int i,j,k;
 	int layer,n;
 	cout << "輸入電影座位金字塔層數: "; //7
 	cin >> layer;
 	cout << "第幾排開始? : "; //3
 	cin>>n;
 	cout<<"\n";
 	
 	k = n-1; //3-1 
	// k 用在第二個 j 迴圈 
 	for (i = (n-1)*(n-1)+1;i <= layer;i++){
 		for (j=1;j<=(layer-i)*2;j++){ 
 			cout << ' ';
 		} 
		
		//2平方~4平方 
		for (j=k*k+1;j<=(k+1)*(k+1);j++){
			cout << num[j-1];
		}
		cout << '\n';
		k++;
	}	
 }
```
```
輸入電影座位金字塔層數: 7
第幾排開始? : 3

    1011121314
  15161718192021
222324252627282930

```
## [CH13_動態配置記憶體_課本範例](https://drive.google.com/open?id=1auwYhoQa3JInIibEkwVXxl_cmZZ1K-BJ)
## [CH14_檔案處理_課本範例](https://drive.google.com/open?id=1-adckl1bWwYVpB2XHq3G0057HVYbwRQz)
處理檔案輸入輸出需要的標頭檔 : 
```cpp=
#include <fstream>
```
## W15 檔案處理、動態配置記憶體(12/17)
### W1501_開關文字檔
open() : 以mode模式開啟filename檔案
fail() : 判斷檔案開啟或關閉時，是否失敗
[text.txt](https://drive.google.com/open?id=1_RX-NAiiWdBexFvoflrz0kJqxmBvICi2)
```cpp=
//範例14-1 唯讀開啟文字檔，並關閉
//文字檔名稱 : test.txt 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;
  
  string filename;
  cout << "輸入要開啟的文字檔名稱:" ;
  cin >> filename;
    
  //以唯讀的方式,開啟檔案 
  readfile.open(filename.c_str(),ios::in);
  if (readfile.fail())
   {
    cout << filename << "檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  cout << filename << "檔案已開啟!\n" ;
  
  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << filename << "檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  cout << filename << "檔案已關閉!\n" ;
  system("pause");
  return 0;
 }
```
```
輸入要開啟的文字檔名稱:test.txt
test.txt檔案已開啟!
test.txt檔案已關閉!
```
### W1502_輸出檔案內容和所佔空間(Byte) 
[text.txt](https://drive.google.com/open?id=1_RX-NAiiWdBexFvoflrz0kJqxmBvICi2)
字元讀取成員函式 : get( )
判斷檔案的游標是否在檔案末端 : eof( )
```cpp=
//範例14-2 開啟文字檔，並輸出內容和所佔空間(Byte) 
//文字檔名稱 : test.txt 
//從檔案中讀取一個字元，讀完後檔案游標移往下一個字元所在位址 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;
    
  //以唯讀的方式,開啟檔案 
  readfile.open("test.txt",ios::in);
  if (readfile.fail()) //判斷是否在readfile所代表的檔案尾部 
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  char ch;
  int filespace=0; //計算檔案所佔的空間(byte)
  cout << "test.txt文字檔內容為:\n";
  while (1)
   {
     ch=readfile.get(); //從test.txt中讀取一個字元 
     
     //判斷否在readfile所代表的檔案之尾部 
     if (readfile.eof()){
        break;	 
	 } 
     cout << ch ;    
     filespace ++;    
   }
   // 一個中文字有2個Byte
  cout << '\n' << "test.txt文字檔所佔的空間為";
  cout << filespace << "Bytes(包括換列字元)\n" ;
  
   
  //清除readfile所代表的檔案之游標在檔尾的狀態    
  //這樣執行readfile.close(); 關檔時才不會有問題 
  readfile.clear();  
 

  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << "test.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  
  system("pause");
  return 0;
 }
```
```
test.txt文字檔內容為:
2020/1/11是總統大選
星期六，好好投阿 !
test.txt文字檔所佔的空間為38Bytes(包括換列字元)
```
### W1503_輸入資料寫入文字檔後面 
[text.txt](https://drive.google.com/open?id=1_RX-NAiiWdBexFvoflrz0kJqxmBvICi2)
```cpp=
//範例14-3 輸入資料寫入test.txt文字檔後面 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料串流輸出物件變數appendfile
  //做為寫入檔案之用
  ofstream appendfile;  
  
  cout << "要寫入資料的文字檔名稱:test.txt\n" ;
      
  //以寫入的方式,開啟檔案test.txt,並將新增的資料寫到檔案尾部
  appendfile.open("test.txt",ios::app);
  if (appendfile.fail())
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  string data;  
  cout << "輸入要寫入的資料(以Enter鍵作為結束):\n" ;  
  getline(cin,data);
  appendfile << data << '\n' ;
  if (appendfile.fail())
   {
    cout << "寫入時,出現錯誤:\n" ;
    exit(1);
   }
  
  //關閉appendfile所代表的檔案
  appendfile.close();  
  if (appendfile.fail())
   {
    cout << "test.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
    
  system("pause");
  return 0;
 }
```
```
要寫入資料的文字檔名稱:test.txt
輸入要寫入的資料(以Enter鍵作為結束):
這一行是範例14-3寫入test.txt的資料
```
被寫入後的test.txt : https://drive.google.com/open?id=1MFIzLWUyi26dR3ZR7EC-eDnF5SDwEa_6
### W1504_getline( )一列一列讀取檔案，並顯示在螢幕上
被範例14-3寫入後的test.txt : https://drive.google.com/open?id=1MFIzLWUyi26dR3ZR7EC-eDnF5SDwEa_6
```cpp=
//範例14-4 承範例14-3
// 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  

//---------------------------------------------------------     
//---------------------------------------------------------    
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;  
    
  //以唯讀的方式,開啟test.txt檔案 
  readfile.open("test.txt",ios::in);
  if (readfile.fail())
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
   
  string data;
  cout << "test.txt文字檔內容為:\n";
  
  //readfile所代表的檔案之游標不在檔尾,繼續讀取資料      
  while (!readfile.eof())
   {
     getline(readfile,data);     
     cout << data ;         
     if (!readfile.eof())
        cout << '\n' ;         
   } 
      
  //清除readfile所代表的檔案之游標在檔尾的狀態      
  readfile.clear();
  
  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << "test.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  
  system("pause");
  return 0;
 }
```
```
test.txt文字檔內容為:
2020/1/11是總統大選
星期六，好好投阿 !這一行是範例14-3寫入test.txt的資料
```
### W1505_自行創建一個文字檔到資料夾裡
```cpp=
//範例14-5 寫心得 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料串流輸物件變數writefile 
  //做為寫入檔案之用
  ofstream writefile;  
  
  cout << "要寫入資料的文字檔名稱:learn_c++.txt\n" ;
  
  //以寫入的方式,開啟檔案learn_c++.txt
  writefile.open("learn_c++.txt",ios::out);
  if (writefile.fail())
   {
    cout << "learn_c++.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  string data;  
  cout << "輸入學習程式設計的心得報告(要結束時,請在該列的最前面按Ctrl+Z鍵):\n" ;
  while(1)
   {
    getline(cin,data);      
          
    //判斷鍵盤是否在檔尾,即輸入資料結束 
     if (cin.eof()) 
      break;
      
    writefile << data << '\n';
    if (writefile.fail())
      {
       cout << "寫入時,出現錯誤:\n" ;
       break;
      }       
   }     
  
  //關閉writefile所代表的檔案
  writefile.close();  
  if (writefile.fail())
   {
    cout << "learn_c++.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;  
  
  //以唯讀的方式,開啟learn_c.txt檔案 
  readfile.open("learn_c++.txt",ios::in);
  if (readfile.fail())
   {
    cout << "learn_c++.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  cout << "learn_c++.txt文字檔內容為:\n";
  
  //readfile所代表的檔案之游標不在檔尾,繼續讀取資料    
  while (!readfile.eof())
   {
     getline(readfile,data);     
     cout << data ;
     if (!readfile.eof())
        cout << '\n' ;           
   }  
  
  //清除readfile所代表的檔案之游標在檔尾的狀態      
  readfile.clear();  
  
  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << "learn_c++.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
   
  system("pause");
  return 0;
 }
```
```
要寫入資料的文字檔名稱:learn_c++.txt
輸入學習程式設計的心得報告(要結束時,請在該列的最前面按Ctrl+Z鍵):
寫心得存入learn_c++.txt檔案中，並將內容從檔案中讀取出來
每一行最多輸入80bytes，
要結束輸入動作，在該列的最前面按下Ctrl+Z鍵
```
程式執行後創建的文字檔 : [learn_c++.txt](https://drive.google.com/open?id=1oMLkmr2X6zkwno83eBjPQEsxYw17m_vA)
```
要寫入資料的文字檔名稱:learn_c++.txt
輸入學習程式設計的心得報告(要結束時,請在該列的最前面按Ctrl+Z鍵):
寫心得存入learn_c++.txt檔案中，並將內容從檔案中讀取出來
每一行最多輸入80bytes，
要結束輸入動作，在該列的最前面按下Ctrl+Z鍵

^Z^Z^Z^Z^Z^Z^Z^Z
learn_c++.txt文字檔內容為:
寫心得存入learn_c++.txt檔案中，並將內容從檔案中讀取出來
每一行最多輸入80bytes，
要結束輸入動作，在該列的最前面按下Ctrl+Z鍵
```
### W1506_動態配置一維陣列變數
* 動態配置 sizeof(資料型態)個Byte之記憶體空間 :
  資料型態 *指標變數 = new 資料型態;
* 回收動態配置 sizeof(資料型態)個Byte之記憶體空間 : 
  delete 指標變數;
  指標變數 = NULL;
* 動態配置一維陣列變數之記憶體空間 :
  資料型態 *指標變數 = new 資料型態[數值n];
* 回收動態配置的一維陣列變數記憶體空間 : 
  delete 指標變數;
  指標變數 = NULL;
```cpp=
//範例13-1 動態配置記憶體給5個元素的一維整數陣列變數使用 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
 {
  int i;
  
  //動態配置有5個元素的一維陣列ptr之記憶體
  int *ptr = new int[5];
  
  for (i=0 ; i<5 ; i++)
   {
    ptr[i]=i+1;
    cout << "ptr[" << i << "]=" << ptr[i] << endl ;
   }
  delete [] ptr; //回收動態配置的一維陣列ptr之記憶體
  ptr=NULL; //回收動態配置的一維陣列ptr之記憶體
  
  system("PAUSE");
  return 0; 
 }
```
```
ptr[0]=1
ptr[1]=2
ptr[2]=3
ptr[3]=4
ptr[4]=5
```
### W1507_動態配置二維陣列變數
* 動態配置二維m*n陣列變數之記憶體空間 :
  ```
  資料型態 **指標變數 = new 資料型態[數值m];
  for (i=0;i<m;i++){
      資料型態 指標變數[i] = new 資料型態[數值n];
  }
  ```
* 回收動態配置的二維m*n陣列變數記憶體空間 : 
  ```
  for (i=0;i<m;i++){
      delete [] 指標變數[i];
  } 
  delete [] 指標變數;
  指標變數 = NULL;
  ```
```cpp=
/*範例13-2 
動態配置記憶體給3*2個元素的二維單精度浮點數陣列變數使用*/ 
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j,k=1;
 
  //動態配置3x2的二維陣列ptr之記憶體
  float **ptr = new float *[3];
  for (i=0 ; i<3 ; i++)
    ptr[i] = new float [2];
  //動態配置3x2的二維陣列ptr之記憶體
  
  for (i=0 ; i<3 ; i++)
    for (j=0 ; j<2 ; j++)
     {
      ptr[i][j]=k;
      k++;
      cout << "ptr[" << i << "][" << j << "]=" 
           << ptr[i][j] << endl ;
     }
     
  //回收動態配置的二維陣列ptr之記憶體   
  for (i=0 ; i<3 ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //回收動態配置的二維陣列ptr之記憶體
  
  system("PAUSE");
  return 0; 
 }
```
```
ptr[0][0]=1
ptr[0][1]=2
ptr[1][0]=3
ptr[1][1]=4
ptr[2][0]=5
ptr[2][1]=6
```
### W1508_將資料格式化後寫入檔案
```cpp=
//範例14-6 將資料寫入animal.txt檔案中 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料輸出串流物件變數writefile
  //做為寫入檔案之用
  ofstream writefile;  

  //以寫入的方式,開啟檔案,開啟檔案animal.txt    
  writefile.open("animal.txt",ios::out);
  if (writefile.fail())
   {
    cout << "animal.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
    
  writefile << "動物\t年齡\t身高\n" ;
  int i;
  string name;  
  int age,height;//宣告整數型態以利範例14-7計算平均值
  for (i=1;i<=3;i++)
   {
    cout << "輸入第" << i 
         << "種動物名稱，年齡及身高(以空白鍵作區隔):\n" ;                
    cin >> name >> age >> height ;
    writefile << name << '\t' << age << '\t' << height << '\n';
    if (writefile.fail())
      {
       cout << "寫入時,出現錯誤:\n" ;
       break;
      }       
   }     
  
  //關閉writefile所代表的檔案
  writefile.close();  
  if (writefile.fail())
   {
    cout << "animal.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
  
  system("pause");
  return 0;
 } 
```
```
輸入第1種動物名稱，年齡及身高(以空白鍵作區隔):
鼠 10 10
輸入第2種動物名稱，年齡及身高(以空白鍵作區隔):
牛 80 100
輸入第3種動物名稱，年齡及身高(以空白鍵作區隔):
虎 40 50
```
程式執行後創建的文字檔 : [animal.txt](https://drive.google.com/open?id=1ngRAqk612d9FWKk0XXQvdIzxY-V3Pb3R)
### W1509_計算範例14-6的資料平均值 
```cpp=
//範例14-7 計算範例14-6的資料平均值 
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
 
  //以可讀取可寫入的開檔模式,開啟檔案animal.txt
  //新增的資料會寫到檔尾
  read_writefile.open("animal.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "animal.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  string name;  
  int age,height;  
  
  getline(read_writefile,name) ;
  
  float total_age=0,total_height=0;
  int i;  
  for (i=1;i<=3;i++)
   {         
    read_writefile >> name >> age >> height ;
    if (read_writefile.fail())
      {
       cout << "讀取時,出現錯誤:\n" ;
       break;
      }
    total_age=total_age+age;
    total_height=total_height+height;       
   }
   
  //設定顯示小數一位 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //設定顯示小數一位
 
  cout << "平均年齡:" << total_age/3
       << "\t平均身高:" << total_height/3  << '\n' ;
      
  //將檔案的游標移到檔尾 
  read_writefile.seekg(0,ios::end) ; 
  
  read_writefile << "平均年齡:" << total_age/3
                 << "\t平均身高:" << total_height/3 << '\n' ;
      
  //清除read_writefile所代表的檔案之游標在檔尾的狀態      
  read_writefile.clear();
                  
  //關閉read_writefile所代表的檔案
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "animal.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
  
  system("pause");
  return 0;
 }

```
```
平均年齡:43.3   平均身高:53.3
```
程式執行後被修改的animal.txt文字檔 : https://drive.google.com/open?id=1W38zP_ONmYdfzOTd7JhNDiqKFQQYlpVu
### [期末報告](https://drive.google.com/drive/u/2/folders/0ALxTGJ9JQca4Uk9PVA)(2020/01/07)
[題目](https://drive.google.com/open?id=1kxfMUcZCYy2_BMoa_QFq4jqAN3i8zRER)

## W16 第2次期中考(2019/12/24)
第二次期中考於2019/12/24於原上課教室(電算中心)進行上機考，請同學多加練習課本例題以屆時能夠活用

可將陣列、指標、使用者自訂函式、動態配置記憶題及檔案處理以上章節多加複習

有問題者可以詢問老師(紅樓204)或助教(海事302)

資料檔案稍後上傳 祝各位同學期末準備順利 (by助教)
https://tronclass.ntou.edu.tw/course/56441/learning-activity#/152806?view=scores

1.用矩陣解二元一次聯立方程式
* 3x+4y=7
* 2x+3y=5
* (x,y)=(1,1)
```cpp=
//A*C=B 
//C=A'*B 
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int A[2][2]; //以2*2矩陣A存放兩方程式的係數

	int B[2][1]; //以2*1矩陣存放兩方程式的值
	int C[2][1] = {0,0};
	cout<<"請輸入第一方程式:\nx係數=";
	cin>>A[0][0];
	cout<<"y係數=";
	cin>>A[0][1];
	cout<<"方程式值=";
	cin>>B[0][0];
	cout<<"請輸入第二方程式:\nx係數=";
	cin>>A[1][0];
	cout<<"y係數=";
	cin>>A[1][1];
	cout<<"方程式值=";
	cin>>B[1][0];
	
	int Atranspose[2][2] = {{A[1][1],-A[0][1]},
	{-A[1][0],A[0][0]}}; //將A轉置
    cout << "C = \n";
	for (int i=0;i<2;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<2;k++){
				C[i][j]+=Atranspose[i][k]*B[k][j];
				//x,y的值可由A轉置後乘上B得到	
			}
			
		cout << C[i][j];
		cout<<"\n";
		}
		
	}
	cout << "\n(x,y)=("<<C[0][0]<<","<<C[1][0]<<")\n";

	
	system("pause");
	return 0; 
}
```
```
請輸入第一方程式:
x係數=3
y係數=4
方程式值=7
請輸入第二方程式:
x係數=2
y係數=3
方程式值=5
C =
1
1

(x,y)=(1,1)
```
