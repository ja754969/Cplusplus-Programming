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
  		break;
  	default:
  		switch(year % 4) //�~����4������
		{
			case 0:
				switch(year % 100) //�~������100������
	    		{
	   			case 0:	
					cout << "�褸" << year << "�~���O�|�~\n" ;
					break;
	    		default:
		 			cout << "�褸" << year << "�~�O�|�~\n" ;
		 			break;
	    		}
	    		break;
    		default:
    	    	cout << "�褸" << year << "�~���O�|�~\n" ;
    	    	break;
  		} 
  		break;
  }

  system("pause");
  return 0;
 }
