#include"InputFunction.h"



void Input_Config_S(fstream& F,Config_S_Struct *C){
	string buffer;
	F >> buffer;
	C->Input_Layer_Count = stoi(buffer);
	F >> buffer;
	C->Hidden_Layer_Count = stoi(buffer);
	F >> buffer;
	C->Output_Layer_Count = stoi(buffer);
}

double *Input_Config_IO_MaxMin(fstream& F,int Layer_Count){
	double *array_buffer = new double[Layer_Count];
	Input_nData_Into_Array(F,Layer_Count,array_buffer);
	return array_buffer;
}

double *Input_CS_HB_and_OB(fstream& F,int Layer_Count){
	double *array_buffer = new double[Layer_Count];
	Input_nData_Into_Array(F,Layer_Count,array_buffer);
	return array_buffer;
}

matrix *Input_CS_HW_and_OW(fstream& F,int I,int J){
	return Create_Matrix(F,I,J);
}

matrix *Input_inputs(fstream& F,int *Data_Size,int Layer_Count){
	return Create_Matrix(F,*Data_Size,Layer_Count);
}