#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
int main(){
	std::string name = "mike";
	int age = 28;
	char blood= 'A';
	float height = 168.5;
	double money = 1234567000;
	
	//cout.precision(1);       //�]�w��Ʀ�� + �p�Ʀ�Ʀ@1�� 
	//cout.unsetf(ios::fixed); //�]�w�p�Ʀ��1��
	std::cout<<"123456789012345678901234"<<"56789012345678901234567890\n"<<"�ڪ��W�r�s:"<< name <<"\t���~"<<age<<"��\n";
	std::cout<<"�嫬�O"<< blood <<"\t����" << height <<"����\t";
	
	cout.precision(6);       //�]�w��Ʀ�� + �p�Ʀ�Ʀ@6�� (6�i��)
	cout.unsetf(ios::fixed); //�]�w�p�Ʀ��6�� 
	cout.unsetf(ios::scientific); //�B�I�ƥH��ǰO����� 
	
	std::cout <<"�Ȧ�s��"<< money <<"��\n" ;
	system("pause");
	return 0;
}
