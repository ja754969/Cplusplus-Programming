#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int year;  
  cout << "�п�J�褸�~��:" ;
  cin >> year ;   
  switch(year % 400) //�~����400������
  {
	case 0:
  		cout << "�褸" << year << "�~�O�|�~\n" ;
  		break; // break for 0(�W) 
  	default:
  		switch(year % 4) //�~����4������
		{
			case 0:
				switch(year % 100) //�~������100������
	    		{
	   			case 0:	
					cout << "�褸" << year << "�~���O�|�~\n" ;
					break; // break for case 0 (��)
	    		default:
		 			cout << "�褸" << year << "�~�O�|�~\n" ;
	    		}
	    		break; // break for case0 (�~)
    		default:
    	    	cout << "�褸" << year << "�~���O�|�~\n" ; 
  		} 
  }

  system("pause");
  return 0;
 }
