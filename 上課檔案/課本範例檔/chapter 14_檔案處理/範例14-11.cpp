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

  //�ŧimovie���@��3�Ӥ�����struct cinema���c�}�C�ܼ�
  struct cinema movie[3]; 
    
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
   
  int tcount; //Ū���q�v��T���c�O��������
  int i,cursor_pos; //�ثe�q�v��T�O���ɪ���Ц�m
  do  
   {
    system("cls");
    cout << "��J�nŪ���q�v��T���c�O��������(�̦h3��):" ;  
    cin >> tcount;
    
    //�ثe�q�v��T�O���ɪ���Ц�m
    cursor_pos=readbinaryfile.tellg();
    
    //�@��Ū��tcount��cimena���c���A�����
    //�æs�Jmovie���c�}�C�ܼ�
    readbinaryfile.read((char *)&movie,sizeof(struct cinema)*tcount);
    
    //��Ʀ�y��J�����ܼ�readbinaryfile�ҥN���ɮפ���Ф��b�ɧ� 
    if (!readbinaryfile.eof())
      {
       cout << "�q�v��T���c�O��:\n" ;
       cursor_pos=readbinaryfile.tellg(); 
       for (i=0;i<tcount;i++)
          cout << "�q�v�W��:" << movie[i].name << '\t'
               << "�W�M���:" << movie[i].date << '\n' 
               << "�W�M�U�B:" << movie[i].place << '\t'
               << "����:" << movie[i].price << "\n\n" ;            
      }
    else
      {
       //cout << "�q�v��T���c�O��:\n" ;       
       while (1)
        {
         //�M��readbinaryfile�ҥN���ɮפ���Цb�ɧ������A      
         readbinaryfile.clear();
         readbinaryfile.seekg(cursor_pos,ios::beg);
         tcount--;
         if (tcount>0)
           {
            readbinaryfile.read((char *)&movie,sizeof(struct cinema)*tcount);       
            if (!readbinaryfile.eof())    
              {
               cout << "�q�v��T���c�O��:\n" ;
               for (i=0;i<tcount;i++)
                  cout << "�q�v�W��:" << movie[i].name << '\t'
                       << "�W�M���:" << movie[i].date << '\n' 
                       << "�W�M�U�B:" << movie[i].place << '\t'
                       << "����:" << movie[i].price << "\n\n" ;            
               break;
              }               
           }
         else
           {
            cout << "�w�L�q�v��T���c�O��\n" ;                  
            break;
           }
        }
      }
    cout << "�O�_�~��Ū���q�v��T���c�O��? (y/n):" ;
   } while (toupper(getche()) == 'Y' && i<3);
  
  cout << '\n' ;
  
  
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
