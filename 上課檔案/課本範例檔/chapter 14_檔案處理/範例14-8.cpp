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
    char date[9];        // �W�M���
    char place[7];       // �W�M�U�B 
    int price;           // ���� 
   };

  //�ŧimovie��struct cinema���c�ܼ�
  struct cinema movie; 

    
  //�ŧi�@�Ӹ�ƫ���ofstream����Ʀ�y��X�����ܼ�writebinaryfile 
  //�����g�J�ɮפ���
  ofstream writebinaryfile;  
 
  //�H�G�i��g�J���}�ɼҦ�,�}��movie.bin
  writebinaryfile.open("movie.bin",ios::out|ios::binary);
  if (writebinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
  
  cout << "�إ߹q�v��T���c�O��:" ;
  do
   {
    cout << "\n�q�v�W��:" ;
    cin >> movie.name ;
    cout << "�W�M���:" ;
    cin >> movie.date ;
    cout << "�W�M�U�B:" ;
    cin >> movie.place ;
    cout << "����:" ;
    cin >> movie.price ;

    //�@���g�J1��cinema���c���A����ƨ�
    //��Ʀ�y��X�����ܼ�writebinaryfile�ҥN���ɮפ�
    writebinaryfile.write((char *)&movie,sizeof(struct cinema));

    cout << "�O�_�~���J? (y/n):" ;
   }while (toupper(getche()) == 'Y' );
    
  // �`�N�Ggetche�ŧi�bconio.h
  // �@�@�@toupper�ŧi�bctype.h

  cout << '\n' ;
  
  //����writebinaryfile�ҥN���ɮ�  
  writebinaryfile.close();  
  if (writebinaryfile.fail())
   {
    cout << "movie.bin�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
    
  system("PAUSE");
  return 0; 
}
