#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  struct student
   {
    string code;    //�Ǹ� 
    string name;    //�m�W
    int  age;       //�~��
    string tel;     //�q��
    string address; //��}
    void inputdata(void)
     {
      cout << "��J�Ǹ�:" ;
      getline(cin,code) ;
      cout << "��J�m�W:" ;
      getline(cin,name) ;
      cout << "��J�~��:" ;
      cin >> age ;    
      
      cin.sync() ; 
      //�M���d�b��L�w�İϪ����(�Ѧ�3-2��ƿ�J)                
      
      cout << "��J�q��:" ;
      getline(cin,tel) ;
      cout << "��J��}:" ;
      getline(cin,address) ;         
     }
     
    void printdata(void)
     {
      cout << code << '\t'
           << name << '\t'
           << age << '\t' 
           << tel << '\t'
           << address << endl;          
     }
   };
  
  struct student first={
         "123201","�L�ѻ�",25,"095888xxxx","����"};
  struct student second[2]={
         {"123202","�����g",24,"095888xxxx","�O�W"},
         {"993201","�c�۾�",27,"095168xxxx","�O�W"}};

  //���c�����ܼ�three���V���c�ܼ�first
  struct student *three=&first;
  int i;
  cout << "�Ǹ�\t�m�W\t�~��\t�q��\t\t��}" << endl ;
     
  first.printdata(); //�L�Xfirst���c�ܼƪ��������e
  
  //�L�Xsecond[0],second[1]���c�}�C�ܼƪ��������e
  for (i=0;i<=1;i++)    
    second[i].printdata();

  //�L�Xthree���c�����ܼƪ��������e
  three->printdata();
  
  system("pause");
  return 0; 
 }
