#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
 {  
  //�w�qcinema���c��ƫ��A
  struct cinema
   {  
    char name[10];     // �q�v�W��
    char date[9];        // �W�M���
    char place[7];       // �W�M�U�B 
    int price;           // ���� 
   };

  //�ŧimovie��struct cinema���c�ܼ�
  struct cinema movie; 
    
  //�ŧi�@�Ӹ�ƫ���ifstream����Ʀ�y��J�����ܼ�readbinaryfile 
  //����Ū���ɮפ���
  ifstream readbinaryfile;  
 
  //�H�G�i��Ū�����}�ɼҦ�,�}��movie.bin
  readbinaryfile.open("movie.bin",ios::in|ios::binary);
  if (readbinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }   
  cout << "�q�v��T���c�O��:\n" ;
  int i=1;

  //��ܩҦ����q�v��T 
  while (1) 
   {
    //�@��Ū��1��cimena���c���A�����
    //�æs�Jmovie���c�ܼ�
    readbinaryfile.read((char *)&movie,sizeof(struct cinema));
    
    //��Ʀ�y��J�����ܼ�readbinaryfile�ҥN���ɮפ���Ф��b�ɧ� 
    if (!readbinaryfile.eof())
       cout << i << ".�q�v�W��:" << movie.name << '\n' ;            
    else
       break;
    i++;
   }
   
  //�M��readbinaryfile�ҥN���ɮפ���Цb�ɧ������A      
  readbinaryfile.clear();  
  
  cout << "��J�n�ݤ��q�v�W�٪��Ǹ�:" ;    
  int no; //�q�v�W�٧Ǹ�
  cin >> no ;
  
  //�N�ɮ׫��в��ʨ�Z�����Y
  //sizeof(struct cinema)*(no-1) byte����m
  readbinaryfile.seekg(sizeof(struct cinema)*(no-1),ios::beg);  
  
  //�@��Ū��1��cimena���c���A�����
  //�æs�Jmovie���c�ܼ�
  readbinaryfile.read((char *)&movie,sizeof(struct cinema));
    
  //��Ʀ�y��J�����ܼ�readbinaryfile�ҥN���ɮפ���Ф��b�ɧ� 
  if (!readbinaryfile.eof())
     cout << "�q�v�W��:" << movie.name << '\t'
          << "�W�M���:" << movie.date << '\n' 
          << "�W�M�U�B:" << movie.place << '\t'
          << "����:" << movie.price << '\n' ;            
  else
     cout << "�d�L�q�v���:\n" ;
     
  //�M��readbinaryfile�ҥN���ɮפ���Цb�ɧ������A      
  readbinaryfile.clear();  
  
  //����readbinaryfile�ҥN���ɮ�  
  readbinaryfile.close();  
  if (readbinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
    
  system("PAUSE");
  return 0; 
 }
