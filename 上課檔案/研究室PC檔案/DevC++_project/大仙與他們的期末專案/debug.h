#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cmath>
#include"tools.h"
using namespace std;

#ifdef debug
void Debug_debug_Config_S(fstream& F,string S,Config_S_Struct *C);

void Debug_debug_Config_IO_MinMax(fstream& F, string S, int Layer_Count,double *Min,double *Max);

void Debug_debug_Config_HB_and_OB(fstream& F, string S, int Layer_Count,double *ptr);

void Debug_debug_Config_HW_and_OW(fstream& F, string S, int I, int J, matrix *ptr);

void Debug_debug_inputs(fstream& F, string S, matrix *ptr, Config_S_Struct *C);

void Debug_Input_Layer_Normalization(fstream& F, string S, matrix *ptr, Config_S_Struct *C);

void Debug_Hidden_Layer_Transfer(fstream& F, string S, double *ptr, Config_S_Struct *C);
#endif