#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <conio.h>
using namespace std;
int main()
 {  
  //�w�qcinema���c��ƫ��A
  struct cinema
   {  
    char name[10];     // �q�v�W��
    char date[9];      // �W�M���
    char place[7];     // �W�M�U�B 
    int  price;        // ���� 
   };

  //�ŧimovie���@��3�Ӥ�����struct cinema���c�}�C�ܼ�
  struct cinema movie[3]; 

    
  //�ŧi�@�Ӹ�ƫ���ofstream����Ʀ�y��X�����ܼ�appbinaryfile 
  //�����g�J�ɮפ���
  ofstream appbinaryfile;  
 
  //�H�G�i��s�W���}�ɼҦ�,�}��movie.bin 
  appbinaryfile.open("movie.bin",ios::app|ios::binary);
  if (appbinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }    
  
  int i=0;  
  cout << "�@���̦h�إ�3���q�v��T���c�O��:" ;  
  do
   {
    cout << '\n' << i+1 << ".�q�v�W��:" ;
    cin >> movie[i].name ;
    cout << "�W�M���:" ;
    cin >> movie[i].date ;
    cout << "�W�M�U�B:" ;
    cin >> movie[i].place ;
    cout << "����:" ;
    cin >> movie[i].price ;
    i++;
    cout << "\n�O�_�~���J? (y/n):" ;
   } while (toupper(getche()) == 'Y' && i<3);

   cout << '\n' ;

  //�@���g�Ji��cinema���c���A����ƨ�
  //��Ʀ�y��X�����ܼ�appbinaryfile�ҥN���ɮפ�    
  appbinaryfile.write((char *)&movie[0],sizeof(struct cinema)*i);
 
  //����appbinaryfile�ҥN���ɮ�  
  appbinaryfile.close();  
  if (appbinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
    
  system("PAUSE");
  return 0; 
 }
