#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

#ifndef StructDefininition
	#define StructDefininition
	typedef struct config_s_struct{
		int Input_Layer_Count = 0;
		int Hidden_Layer_Count = 0;
		int Output_Layer_Count = 0;
	}   Config_S_Struct;

	typedef struct matrix{
		double *data = NULL;
		matrix *Next = NULL;
	}	Matrix;
#endif

void File_OpenforRead(fstream& F,string S);

void File_OpenforWrite(fstream& F,string S);

void File_OpenforAppend(fstream& F,string S);

void File_Close(fstream& F,string S);

matrix *Create_Matrix(fstream& F,int I,int J);

void Input_nData_Into_Array(fstream& F,int Layer_Count,double *array_buffer);