#define HOUR 24
#define CHINESE "����"
#define MYNAME(name) cout << "my name is " << name << '\n'

#define PRINTSTAR for(i=1;i<=3;i++)\
                   {\
                    for (j=1;j<=i;j++)\
                      cout << '*' ;\
                    cout << '\n' ;\
                   }

#define LEAP(y) if ((y) % 400 == 0 ||\
                 ((y) % 100 != 0 && (y) % 4==0))\
                cout << "�褸" << y << "�~�O�|�~.\n" ;\
              else\
                cout << "�褸" << y << "�~���O�|�~.\n" ;

void printwhat(int digit)
 {
  int m,n;
  for (m=1;m<= 3;m++)
   {
    for (n=1;n<=m;n++)
      cout << digit ;
    cout << '\n' ;
   }
 }

#define MYWAIT cout << "�еy��...\n"
