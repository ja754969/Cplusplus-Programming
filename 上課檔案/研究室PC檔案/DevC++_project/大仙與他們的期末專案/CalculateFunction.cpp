#include"CalculateFunction.h"

void Input_Layer_Normalization(double *data,double *Min,double *Max,Config_S_Struct *C){
	for(int a = 0 ; a < C->Input_Layer_Count; a++)
		data[a] = 2 * (data[a] - Min[a]) / (Max[a] - Min[a]) - 1;
}

void Hidden_Layer_Summation(double *data,double *Hn,matrix *HW,double *HB,Config_S_Struct *C){
	//Flush
	for(int a = 0 ; a < C->Hidden_Layer_Count ; a++){
		Hn[a] = 0;
	}
	for(int a = 0; a < C->Hidden_Layer_Count ; a++){
		for(int M = 0 ; M < C->Input_Layer_Count; M++){
			Hn[a] += HW->data[M] * data[M];
		}
		Hn[a] += HB[a];
		HW = HW->Next;
	}
}

void Hidden_Layer_Transfer(double *Hn,Config_S_Struct *C){
	for(int a = 0 ; a < C->Hidden_Layer_Count ; a++)
		Hn[a] = (2 / (1 + exp(-2 * Hn[a]))) - 1;
}


void Output_Layer_Summation(double *Hn,double *Ol,matrix *OW,double *OB,Config_S_Struct *C){
	//Flush
	for(int a = 0 ; a < C->Output_Layer_Count ; a++){
		Ol[a] = 0;
	}
	for(int a = 0; a < C->Output_Layer_Count ; a++){
		for(int N = 0 ; N < C->Hidden_Layer_Count; N++){
			Ol[a] += OW->data[N] * Hn[N];
		}
		Ol[a] += OB[a];
		
		OW = OW->Next;
	}
}


void Output_Layer_Inverse_Normalization(double *Ol,double *Min,double *Max,Config_S_Struct *C){
	for(int a = 0 ; a < C->Output_Layer_Count; a++)	
		Ol[a] = (Ol[a]+1)/2 * (Max[a] - Min[a]) + Min[a];
}

void Output_ANNSFM_outputs(fstream& F,double *Ol,Config_S_Struct *C){
	for(int a = 0 ; a < C->Output_Layer_Count ; a++){
		F.precision(16);
		F << Ol[a] << " ";
	}
	F << endl;
}