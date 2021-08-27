#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int answer,r[4]; //砆瞦计,のだ秨计
  int guess ,g[4]; // 瞦计,のだ秨计
  int div_num=1; //埃计
  int a,b; //魁 ? A ? B
  int i,j,k;

  cout << "块砆瞦计(1234~9876),计ぃ狡:" ;
  cin >> answer ;
  system("cls");
  //cout << "块砆瞦计(1234~9876),计ぃ狡:" ;
  for(i=0;i<4;i++)
   {
    r[i]=answer / div_num % 10;
    //r[0]answer计,r[1]answer计
    //r[2]answerκ计,r[3]answer计
    div_num=div_num*10;
   }
  for(k=1;k<=12;k++)
   {
    cout << "块璶瞦计,计ぃ狡:" ;
    cin >> guess ;
    div_num=1;
    for(i=0;i<4;i++)
     {
      g[i]=guess / div_num % 10;
      //g[0]guess计,g[1]guess计
      //g[2]guessκ计,g[3]guess计
      div_num=div_num*10;
     }
    a=0;
    b=0;

    for(i=0;i<4;i++)
      for(j=0;j<4;j++)
        if (r[i]==g[j])//计
          if (i==j) //竚,计
            a++;
          else //竚ぃ,计
            b++;

    cout << guess << "" << a <<'A' 
         << b << "B\n" ;
    if (a==4)
      break;
   }
  if (a==4)
    cout << "尺眤BINGO\n";
  else
    cout << "タ絋氮" << answer << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
