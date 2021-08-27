#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cmath>
#include"tools.h"

using namespace std;


void Input_Layer_Normalization(double *data,double *Min,double *Max,Config_S_Struct *C);

void Hidden_Layer_Summation(double *data,double *Hn,Matrix *HW,double *HB,Config_S_Struct *C);

void Hidden_Layer_Transfer(double *Hn,Config_S_Struct *C);

void Output_Layer_Summation(double *Hn,double *Ol,Matrix *OW,double *OB,Config_S_Struct *C);

void Output_Layer_Inverse_Normalization(double *Ol,double *Min,double *Max,Config_S_Struct *C);

void Output_ANNSFM_outputs(fstream& F,double *Ol,Config_S_Struct *C);