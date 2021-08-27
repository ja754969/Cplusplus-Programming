#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  struct parent
   {
    string name;
    int  age;
    void printparent(void)
     {
      cout << name << '\t'
           << age << endl;          
     }
   };

  struct employee
   {
    int id;
    string name;
    struct parent myparent;
    void printemployee(void)
     {
      cout << id << '\t'
           << name << '\t' ;          
      myparent.printparent(); 
     }
   };

  struct employee a,*c;

  //結構指標變數c指向結構變數a
  c=&a;

  //設定a結構變數的成員內容
  a.id=21;
  a.name="John";
  a.myparent.name="Mike";
  a.myparent.age=50;
  
  cout << "id\tname\tparent\tage" << endl ;
  
  //印出a結構變數的成員內容  
  a.printemployee();
 
  //設定c結構指標變數的成員內容
  c->id=22;
  c->name="David";
  c->myparent.name="Steven";
  c->myparent.age=45;  
  
  //重新印出a結構變數的成員內容  
  a.printemployee();
  
  //印出c結構指標變數的成員內容  
  c->printemployee();
  
  system("pause");
  return 0; 
 }
