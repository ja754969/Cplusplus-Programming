  
  //�ŧi�@�Ӹ�ƫ��A��fstream����ƿ�J/��X��y�����ܼ�read_writefile
  //����Ū��/�g�J�ɮפ���
  fstream read_writefile2;  
 
  //�H�iŪ���i�g�J���}�ɼҦ�,�}���ɮ�
  //�s�W����Ʒ|�g���ɧ�
  read_writefile2.open("weight.txt",ios::in|ios::out);
  if (read_writefile2.fail())
   {
    cout << "weight.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  string weight;  
  int Cw,Mw,Ew;
  int m2,n2,k2=1;
  //int i
  //�ʺA�t�m3x2���G���}�Cptr���O����
  float **ptr2 = new float *[1];
  for (m2=0 ; m2<1 ; m++)
    ptr2[m2] = new float [3];
  //�ʺA�t�m3x2���G���}�Cptr���O����
    
  
  getline(read_writefile2,weight) ;
  
  //float total_C=0,total_M=0,total_E=0;
  int i2;  
  for (i2=1;i2<=2;i2++)
   {         
    read_writefile2 >> Cw >> Mw >> Ew ;
    if (read_writefile2.fail())
      {
       cout << "Ū����,�X�{���~:\n" ;
       break;
      }
    //total_C=total_C+C;
    //total_M=total_M+M;  
	//total_E=total_E+E;
	ptr2[i2-1][0] = Cw;
	ptr2[i2-1][1] = Mw;
	ptr2[i2-1][2] = Ew;  
	for (n2=0 ; n2<3 ; n++)
    	//ptr[i-1][n]=C;
      	//k++;
    	cout << "ptr2[" << i2-1 << "][" << n2 << "]=" << ptr2[i2-1][n2] << endl ; 
   }
   

 

  //for (m=0 ; m<10 ; m++)

     
  //�^���ʺA�t�m���G���}�Cptr2���O����   
  for (m2=0 ; m2<1 ; m2++)
    delete [] ptr2[m2];
  delete [] ptr2; 
  ptr2=NULL;
  //�^���ʺA�t�m���G���}�Cptr2���O����
  
   
  //�]�w��ܤp�Ƥ@�� 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //�]�w��ܤp�Ƥ@��
 
  //�N�ɮת���в����ɧ� 
  read_writefile2.seekg(0,ios::end) ; 
  
      
  //�M��read_writefile�ҥN���ɮפ���Цb�ɧ������A      
  read_writefile2.clear();
                  
  //����read_writefile�ҥN���ɮ�
  read_writefile2.close();  
  if (read_writefile2.fail())
   {
    cout << "weight.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
   
  
  
    
  read_writefile << "��奭��:" << total_C/3
                 << "\t�ƾǥ���:" << total_M/3
				 << "\t�^�奭��:" << total_E/3 << '\n' ;
