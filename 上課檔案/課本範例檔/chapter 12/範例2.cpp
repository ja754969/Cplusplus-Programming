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

  //���c�����ܼ�c���V���c�ܼ�a
  c=&a;

  //�]�wa���c�ܼƪ��������e
  a.id=21;
  a.name="John";
  a.myparent.name="Mike";
  a.myparent.age=50;
  
  cout << "id\tname\tparent\tage" << endl ;
  
  //�L�Xa���c�ܼƪ��������e  
  a.printemployee();
 
  //�]�wc���c�����ܼƪ��������e
  c->id=22;
  c->name="David";
  c->myparent.name="Steven";
  c->myparent.age=45;  
  
  //���s�L�Xa���c�ܼƪ��������e  
  a.printemployee();
  
  //�L�Xc���c�����ܼƪ��������e  
  c->printemployee();
  
  system("pause");
  return 0; 
 }
