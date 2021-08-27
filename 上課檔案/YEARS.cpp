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
  		break;
  	default:
  		switch(year % 4) //年份為4的倍數
		{
			case 0:
				switch(year % 100) //年份不為100的倍數
	    		{
	   			case 0:	
					cout << "西元" << year << "年不是閏年\n" ;
					break;
	    		default:
		 			cout << "西元" << year << "年是閏年\n" ;
		 			break;
	    		}
	    		break;
    		default:
    	    	cout << "西元" << year << "年不是閏年\n" ;
    	    	break;
  		} 
  		break;
  }

  system("pause");
  return 0;
 }
