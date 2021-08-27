#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cmath>
#include"tools.h"

using namespace std;

void Input_Config_S(fstream& F,Config_S_Struct *C);

double *Input_Config_IO_MaxMin(fstream& F,int Layer_Count);

double *Input_CS_HB_and_OB(fstream& F,int Layer_Count);

matrix *Input_CS_HW_and_OW(fstream& F,int I,int J);

matrix *Input_inputs(fstream& F,int *Data_Size,int Layer_Count);