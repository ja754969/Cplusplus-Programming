#include"debug.h"


void Debug_debug_Config_S(fstream& F,string S,Config_S_Struct *C){
	File_OpenforWrite(F,"debug_Config_S.txt");
	F << C->Input_Layer_Count << endl;
	F << C->Hidden_Layer_Count << endl;
	F << C->Output_Layer_Count << endl;
	File_Close(F,"debug_Config_S.txt");
}

void Debug_debug_Config_IO_MinMax(fstream& F, string S, int Layer_Count,double *Min,double *Max){
	File_OpenforWrite(F,S.c_str());
	
	for(int a = 0; a < Layer_Count; a++){
		F << Min[a] << " ";
	}
	F << endl;
	for(int a = 0; a < Layer_Count; a++){
		F << Max[a] << " ";
	}
	
	File_Close(F,S.c_str());
}

void Debug_debug_Config_HB_and_OB(fstream& F, string S, int Layer_Count,double *ptr){
	File_OpenforWrite(F,S.c_str());
	
	for(int a = 0; a < Layer_Count; a++){
		F.precision(16);
		F << ptr[a] << endl;
	}
	
	File_Close(F,S.c_str());
}

void Debug_debug_Config_HW_and_OW(fstream& F, string S, int I, int J, matrix *ptr){
	File_OpenforWrite(F,S.c_str());
	
	for(int a = 0; a < I; a++){
		for(int b = 0; b < J; b++){
			F.precision(16);
			F << ptr->data[b] << " ";
		}
		F << endl;
		ptr = ptr->Next;
	}
	
	File_Close(F,S.c_str());
}

void Debug_debug_inputs(fstream& F, string S, matrix *ptr, Config_S_Struct *C){
	File_OpenforWrite(F,S.c_str());
	while(!(ptr == NULL)){
		for(int a = 0; a < C->Input_Layer_Count; a++){
			F << ptr->data[a] << " ";
		}
		F << endl;
		ptr = ptr->Next;
	}
	File_Close(F,S.c_str());
}


void Debug_Input_Layer_Normalization(fstream& F, string S, matrix *ptr, Config_S_Struct *C){
	
	File_OpenforAppend(F,S.c_str());
	
	for(int a = 0; a < C->Input_Layer_Count; a++){
			F << ptr->data[a] << " ";
		}
		F << endl;
	
	File_Close(F,S.c_str());
}


void Debug_Hidden_Layer_Transfer(fstream& F, string S, double *ptr, Config_S_Struct *C){
	
	File_OpenforAppend(F,S.c_str());
	
	for(int a = 0; a < C->Hidden_Layer_Count; a++){
			F << ptr[a] << " ";
		}
		F << endl;
	
	File_Close(F,S.c_str());
	
	
	
}