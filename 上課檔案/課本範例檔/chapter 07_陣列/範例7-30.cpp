#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int answer,r[4]; //�Q�q���|���,�Τ��}���Ʀr
  int guess ,g[4]; // �q���|���,�Τ��}���Ʀr
  int div_num=1; //����
  int a,b; //���� ? A ? B
  int i,j,k;

  cout << "��J�Q�q���|���(1234~9876),�Ʀr���i����:" ;
  cin >> answer ;
  system("cls");
  //cout << "��J�Q�q���|���(1234~9876),�Ʀr���i����:" ;
  for(i=0;i<4;i++)
   {
    r[i]=answer / div_num % 10;
    //r[0]��answer���Ӧ��,r[1]��answer���Q���
    //r[2]��answer���ʦ��,r[3]��answer���d���
    div_num=div_num*10;
   }
  for(k=1;k<=12;k++)
   {
    cout << "��J�n�q���|���,�Ʀr���i����:" ;
    cin >> guess ;
    div_num=1;
    for(i=0;i<4;i++)
     {
      g[i]=guess / div_num % 10;
      //g[0]��guess���Ӧ��,g[1]��guess���Q���
      //g[2]��guess���ʦ��,g[3]��guess���d���
      div_num=div_num*10;
     }
    a=0;
    b=0;

    for(i=0;i<4;i++)
      for(j=0;j<4;j++)
        if (r[i]==g[j])//�Ʀr�ۦP
          if (i==j) //��m�ۦP,�]�Ʀr�ۦP
            a++;
          else //��m���ۦP,���Ʀr�ۦP
            b++;

    cout << guess << "��" << a <<'A' 
         << b << "B\n" ;
    if (a==4)
      break;
   }
  if (a==4)
    cout << "���߱zBINGO�F\n";
  else
    cout << "���T���׬�" << answer << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
