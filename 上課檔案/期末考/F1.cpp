//10*3�x�}�B�T�쥭�� 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ��A��fstream����ƿ�J/��X��y�����ܼ�read_writefile
  //����Ū��/�g�J�ɮפ���
  fstream read_writefile;  
 
  //�H�iŪ���i�g�J���}�ɼҦ�,�}���ɮ�
  //�s�W����Ʒ|�g���ɧ�
  read_writefile.open("weight.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "weight.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  string weight;  
  int C,M,E;
  int m,n,k=1;
  //int i
  //�ʺA�t�m3x2���G���}�Cptr���O����
  float **ptr2 = new float *[1];
  for (m=0 ; m<1 ; m++)
    ptr2[m] = new float [3];
  //�ʺA�t�m3x2���G���}�Cptr���O����
    
  
  getline(read_writefile,weight) ;
  
  //float total_C=0,total_M=0,total_E=0;
  int i;  
  for (i=1;i<=2;i++)
   {         
    read_writefile >> C >> M >> E ;
    if (read_writefile.fail())
      {
       cout << "Ū����,�X�{���~:\n" ;
       break;
      }
    //total_C=total_C+C;
    //total_M=total_M+M;  
	//total_E=total_E+E;
	ptr2[i-1][0] = C;
	ptr2[i-1][1] = M;
	ptr2[i-1][2] = E;  
	for (n=0 ; n<3 ; n++)
    	//ptr[i-1][n]=C;
      	//k++;
    	cout << "ptr2[" << i-1 << "][" << n << "]=" << ptr2[i-1][n] << endl ; 
   }
   

 

  //for (m=0 ; m<10 ; m++)

     
  //�^���ʺA�t�m���G���}�Cptr2���O����   
  for (m=0 ; m<1 ; m++)
    delete [] ptr2[m];
  delete [] ptr2; 
  ptr2=NULL;
  //�^���ʺA�t�m���G���}�Cptr2���O����
  
   
  //�]�w��ܤp�Ƥ@�� 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //�]�w��ܤp�Ƥ@��
 
  //�N�ɮת���в����ɧ� 
  read_writefile.seekg(0,ios::end) ; 
  
      
  //�M��read_writefile�ҥN���ɮפ���Цb�ɧ������A      
  read_writefile.clear();
                  
  //����read_writefile�ҥN���ɮ�
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "weight.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
   
  
  system("pause");
  return 0;
 }

