//10*3�x�}�B�T�쥭�� 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ��A��fstream����ƿ�J/��X��y�����ܼ�read_writefile
  //����Ū��/�g�J�ɮפ���
  fstream read_writefile;  
 
  //�H�iŪ���i�g�J���}�ɼҦ�,�}���ɮ�animal.txt
  //�s�W����Ʒ|�g���ɧ�
  read_writefile.open("Score.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "Score.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  string Student;  
  int C,M,E;
  int m,n,k=1;
  int all[10][3];
  //int i
  //�ʺA�t�m10*3���G���}�Cptr���O����
  float **ptr = new float *[10];
  for (m=0 ; m<10 ; m++)
    ptr[m] = new float [3];
  //�ʺA�t�m10*3���G���}�Cptr���O����
    
  
  getline(read_writefile,Student) ;
  
  float total_C=0,total_M=0,total_E;
  int i;  
  for (i=1;i<=10;i++)
   {         
    read_writefile >> Student >> C >> M >> E ;
    if (read_writefile.fail())
      {
       cout << "Ū����,�X�{���~:\n" ;
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
   for (i=1;i<=10;i++)
   {         
	for (n=0 ; n<3 ; n++){
    	cout<<all[i-1][n];
	}
    cout<<'\n';
   }

 

  //for (m=0 ; m<10 ; m++)

     
  //�^���ʺA�t�m���G���}�Cptr���O����   
  for (m=0 ; m<10 ; m++)
    delete [] ptr[m];
  delete [] ptr; 
  ptr=NULL;
  //�^���ʺA�t�m���G���}�Cptr���O����
  
   
  //�]�w��ܤp�Ƥ@�� 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //�]�w��ܤp�Ƥ@��
  
  
  cout << ptr[1][2];
 
  cout << "���Z��奭��:" << total_C/10
       << "\t���Z�ƾǥ���:" << total_M/10
	   << "\t���Z�^�奭��:" << total_E/10  << '\n' ;
      
  //�N�ɮת���в����ɧ� 
  read_writefile.seekg(0,ios::end) ; 

  
  
  
  
   	int W[3][1] = {6,4,3};
	int A[10][1] = {0,0,0,0,0,0,0,0,0,0};
	cout << "A = \n";
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				A[i][j]+=ptr[i][k]*W[k][j];
					
			}
			
		cout << A[i][j];
		cout<<"\n";
		}
		
	}    
  //�M��read_writefile�ҥN���ɮפ���Цb�ɧ������A      
  read_writefile.clear();
                  
  //����read_writefile�ҥN���ɮ�
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "Score.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
   
   


	
   
   
   
 
   
  
  system("pause");
  return 0;
 }

