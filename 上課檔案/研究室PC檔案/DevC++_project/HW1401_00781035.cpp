//�ꤺ
#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include <cmath>
using namespace std;
int main()
 { 
  int c[6][2] = {{2,1},{2,-1},{3,3},
  {5,0},{1,-7},{0,-2}};
  //c = {{2,1},{2,-1},{3,3},{5,0},{1,-7},{0,-2}};
  int ox = 0,oy = 0; //���
  
  cout<<"�b�ꤺ(�W)���y���I :";
  for (int x=0;x<=5;x++){
  	if (sqrt(c[x][0]*c[x][0]+c[x][1]*c[x][1])<=sqrt((3-0)*(3-0)+(3-0)*(3-0))){
  			cout<<setw(5)<<"("<<c[x][0]<<","<<c[x][1]<<")";
	}
  }
  cout<<'\n';
  
  system("pause");
  return 0;
 }
