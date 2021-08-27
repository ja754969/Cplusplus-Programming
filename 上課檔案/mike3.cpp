#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string name = "mike";
	int age = 28;
	char blood= 'A';
	float height = 168.5;
	double money = 1234567000;
	
	//cout.precision(1);       //砞﹚俱计计 + 计计1 
	//cout.unsetf(ios::fixed); //砞﹚计计1
	cout<<"123456789012345678901234"<<"56789012345678901234567890\n"<<"и:"<< name <<"\tさ"<<age<<"烦\n";
	cout<<"﹀琌"<< blood <<"\tō蔼"<< setw(7) << height <<"そだ\t";
	
	cout.precision(6);       //砞﹚俱计计 + 计计6 (6秈)
	cout.unsetf(ios::fixed); //砞﹚计计6 
	cout.unsetf(ios::scientific); //疊翴计厩癘腹ボ 
	
	cout <<"蝗︽蹿"<< money <<"じ\n" ;
	system("pause");
	return 0;
}
