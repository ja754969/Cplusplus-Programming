//10*3�x�}�B�T�쥭�� 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;
//int Amean2(int,int,int,int,int); //�ŧi��� 
//int After_Weight_mean(int[],int[],int[],int,int,int); //�ŧi��� 
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
   
   cout << "\n10�H����^�Ʀ��Z(A~J) : \n";
   for (i=1;i<=10;i++)
   {         
	for (n=0 ; n<3 ; n++){
    	cout<<all[i-1][n]<<' ';
	}
    cout<<'\n';
   }

   //cout << ptr[1][2]; //�T�{ptr�i�Q��X 
	
  //for (m=0 ; m<10 ; m++)
    int W[3][1] = {6,4,3}; //�v�� 
	int A[10][1] = {0,0,0,0,0,0,0,0,0,0};//�C�H�U�쭼�H�v�����`�M 
	cout << "\n�C�H���T��[�v�`�M = \n";
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				A[i][j]+=ptr[i][k]*W[k][j];
					
			}
			
		cout << A[i][j]<<'\n';
		cout<<"\n";
		}
		
	}
	
	
	
	
	
	
	
//	int After_Weight_mean(W,A,ptr,10,1,3);
	
	
	
	
	
	
	
	    
	int Amean[10][1];//�C�ӤH���`���Z������
	cout << "\n�C�H���`���Z������ = \n"; 
	for (int i=0;i<10;i++) {
		for (int j=0;j<1;j++){
		    Amean[i][j] = A[i][j]/(6+4+3);
			cout << Amean[i][j]<<'\n';
			cout<<"\n";
		}
		
	}    
	//�U�즨�Z������
	int mean_all[3][1] = {total_C/10,total_M/10,total_E/10};
    cout << "���Z��奭��:" << mean_all[0][0]
       << "\t���Z�ƾǥ���:" << mean_all[0][1]
	   << "\t���Z�^�奭��:" << mean_all[0][2]  << '\n' ;
	// 
	int V[3][1] = {0,0,0}; //�U�즨�Z���зǮt
	cout << "\n�U�즨�Z���ܲ��� = \n"; 
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			for (k=0;k<10;k++){
				V[i][j] += pow(ptr[k][i]-mean_all[0][i],2)/10;
			}
		    
			cout << V[i][j]<<'\n';
			cout<<"\n";
		}
		
	}
	// 
	cout << "\n�U�즨�Z���зǮt = \n"; 
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			cout <<sqrt(V[i][j])<<'\n';
			cout<<"\n";
		}
	 	
	}   
	// 
	int temp;
	for (int i=1;i<=10-1;i++){ //�B�J 1 2 3 4
		for (int j=0;j<10-i;j++) {//��� 4 3 2 1
			for (int k=0;k<3;k++){
				if (ptr[j][k]>ptr[j+1][k]){ //�p�G�����Ƥ�k��j
				//���N�Ndata[j]�Mdata[j+1]�����e���� 
				temp = ptr[j][k];
				ptr[j][k]=ptr[j+1][k];
				ptr[j+1][k]=temp;	
				}	
			}
			
		} 
	}
	
	cout<<"�Ƨǫ᪺�T����:\n";
	for (int i=0;i<10;i++){
		for (int k = 0;k<3;k++){
		cout<<ptr[i][k]<<' ';
		
		}
		cout<<'\n';
	}
	
	
	
	int num[1][3]={0,0,0}; //�նZ�����H��(�@���֥[��) 
	int num2[1][3]={0,0,0}; //�նZ�����H��(�������`�ϥ�) 
	cout<<"\n�նZ��10�����֥[�H�� : \n"<<"\tC\tM\tE\n";
	for (int m = 100;m>=10;m=m-10){
		for (int i=0;i<10;i++){
			for (int k = 0;k<3;k++){
				if (ptr[i][k] <= m-1 && ptr[i][k] >= m-10){
					num[0][k]+=1;
//					num2[0][k]+=1; 
				}
	             
				
			}

		}
	cout << m-10<<"~"<<m-1<<'\t'
	<<num[0][0]<<'\t'<< num[0][1]<<'\t'<< num[0][2]; //�ؼ� : 10*3�x�}
//	num2[0][0]=0,num2[0][1]=0,num2[0][2] = 0;
	cout<<'\n';		
		
	}
	
	cout<<"\n�նZ��10�����H�Ƥ��G : \n"<<"\tC\tM\tE\n";
	for (int m = 100;m>=10;m=m-10){
		for (int i=0;i<10;i++){
			for (int k = 0;k<3;k++){
				if (ptr[i][k] <= m-1 && ptr[i][k] >= m-10){
//					num[0][k]+=1;
					num2[0][k]+=1; 
				}
	             
				
			}

		}
	cout << m-10<<"~"<<m-1<<'\t'
	<<num2[0][0]<<'\t'<< num2[0][1]<<'\t'<< num2[0][2]; //�ؼ� : 10*3�x�}
	num2[0][0]=0,num2[0][1]=0,num2[0][2] = 0; //�k�s 
	cout<<'\n';		
		
	}
	
	
//  //�ŧi�@�Ӹ�ƫ���ofstream����Ʀ�y��X�����ܼ�appendfile
//  //�����g�J�ɮפ���
//  ofstream appendfile;  
//  
//  cout << "\n\n�n�g�J��ƪ���r�ɦW��:Score.txt\n" ;
//      
//  //�H�g�J���覡,�}���ɮ�test.txt,�ñN�s�W����Ƽg���ɮק���
//  appendfile.open("Score.txt",ios::app);
//  if (appendfile.fail())
//   {
//    cout << "Score.txt�ɮ׵L�k�}��!\n" ;      
//    system("pause");
//    exit(1);//exit(1)�禡�@�ά��j�������{��
//   }  
//  
//  string data;  
//  cout << "��J�n�g�J�����(�HEnter��@������):\n" ;  
//  getline(cin,data);
//  appendfile << data << '\n' ;
//  if (appendfile.fail())
//   {
//    cout << "�g�J��,�X�{���~:\n" ;
//    exit(1);
//   }
//  
//  //����appendfile�ҥN���ɮ�
//  appendfile.close();  
//  if (appendfile.fail())
//   {
//    cout << "Score.txt�ɮ׵L�k����!\n" ; 
//    system("pause");
//    exit(1);//exit(1)�禡�@�ά��j�������{��
//   }
     
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
  
  
  

      
  //�N�ɮת���в����ɧ� 
  read_writefile.seekg(0,ios::end) ; 

  
  
  
  


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
 
 
//���ѧֱ���: Ctrl+/ 
//int After_Weight_mean(int W2[][],int A2[][],int ptr[][],int pnum2,int nn,int kk){
//	int nn; //�[�v��ƪ����(1) 
//	int pnum2; //Score.txt�ɪ��C��(10) 
//	int kk; //�[�v��ƪ��C��(3) 
//	int W2[kk][nn] = {6,4,3}; //�v�� 
//	int A2[pnum2][nn] = {0,0,0,0,0,0,0,0,0,0};//�C�H�U�쭼�H�v�����`�M 
//	cout << "\n�C�H���T��[�v�`�M = \n"; //�|�X�{10*1�x�} 
//	for (int i=0;i<pnum2;i++) {
//		for (int j=0;j<nn;j++){
//			for (int k=0;k<kk;k++){
//				C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
//				C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
//				C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
//				A2[i][j]+=ptr[i][k]*W2[k][j];
//				
//			}
//		
//		cout << A2[i][j]<<'\n';
//		cout<<"\n";
//		}
//	}
//	return A2;
//}
//
//int Amean2(int W2,int A2,int ptr,int pnum2,int nn){
//	int Amean2[pnum2][nn];//�C�ӤH���`���Z������
//	cout << "\n�C�H���`���Z������ = \n"; 
//	for (int i=0;i<pnum2;i++) {
//		for (int j=0;j<nn;j++){
//	    	//Amean2[i][j] = A[i][j]/(W2[0]+W2[1]+W2[2]);
//			//cout << Amean2[i][j]<<'\n';
//			//cout<<"\n";
//		}
//	
//	}
//}
    
