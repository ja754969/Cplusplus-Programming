#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[5]={12,6,26,1,58};
  int i,j;
  int temp;
  cout << "�Ƨǫe�����:" ;
  for (i=0;i<5;i++)
    cout << data[i] << ' ' ;
  cout << '\n' ;

  for (i=1;i<=4;i++) //����4(=5-1)�ӨB�J
    for (j=0;j<5-i;j++)//��i�B�J�A����5-i�����
      if (data[j]>data[j+1]) //���䪺���>�k�䪺���
        {//�Ndata[j]�Adata[j+1]�����e����
         temp=data[j];
         data[j]=data[j+1]; 
         data[j+1]=temp;
        }

  cout << "�Ƨǫ᪺���:" ;
  for (i=0;i<5;i++)
   cout << data[i] << ' ' ;
  cout << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
