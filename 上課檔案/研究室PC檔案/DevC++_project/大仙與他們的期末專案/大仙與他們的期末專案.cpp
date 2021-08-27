//#include <tools.h> 
#include <InputFunction.h> 
#include <CalculateFunction.h> 
#include <debug.h> 

/*  Final Project(ANNSFM)
    Structure:
		Data:
		    M = 8    N = 12    L = 1	n = 708
			ANNSFM_Config_I:	M * 2組
			ANNSFM_Config_O:	L * 2組
			ANNSFM_Config_S: 	3個
			ANNSFM_CS_HB:   	N個
			ANNSFM_CS_HW:   	M * N
			ANNSFM_CS_OB:   	L個
			ANNSFM_CS_OW:   	N * L
			ANNSFM_data_size:	1個
			ANNSFM_inputs:  	M * n組
		
		Function:
			ANNSFM_Config_S每個值分別對應Input Layer, Hidden Layer, Outper Layer之數量,必須優先處理
			ANNSFM_Config_I為先使用者,之後是ANNSFM_CS_HB,ANNSFM_CS_HW
			ANNSFM_Config_O為輸出時使用,之後是ANNSFM_CS_OB,ANNSFM_CS_OW
			ANNSFM_data_size是處理ANNSFM_inputs使用,最後再進行
			
		Process:
			Inputs
				1.Input ANNSFM_Config_S\
				2.Input ANNSFM_Config_I
				3.Input ANNSFM_CS_HB
				4.Input ANNSFM_CS_HW
				5.Input ANNSFM_Config_O
				6.Input ANNSFM_CS_OB
				7.Input ANNSFM_CS_OW
				8.Input ANNSFM_data_size
				9.Input ANNSFM_inputs
			
			Calculate
				1.Input Layer Normalization -> Into Hidden layer
				2.Hidden Layer Summation WH(n,m)*I(m,l) + BH(n,1)
				3.Hidden Layer Transfer Function -> Into Output layer
				4.Output Layer Summation WO(1,n)*I(m,1) + BO(l,1)
				5.Output Layer Inverse Normalization
			
			Output
				1.Output y into ANNSFM_outputs
			
			Graph
				1.Graph with Excel or Matlab

*/

int main(void){
		#ifdef debug
			fstream F;
		#endif
	string buffer;
		//Input ANNSFM_Config_S
	fstream FILE_Config_S;
	File_OpenforRead(FILE_Config_S,"ANNSFM_Config_S.txt");
	
	Config_S_Struct *Config_S = new Config_S_Struct;
	Input_Config_S(FILE_Config_S,Config_S);
		#ifdef debug
			Debug_debug_Config_S(F,"debug_Config_S.txt",Config_S);
		#endif
		
	File_Close(FILE_Config_S,"ANNSFM_Config_S.txt");
	
		//Input ANNSFM_Config_I
	fstream FILE_Config_I;
	File_OpenforRead(FILE_Config_I,"ANNSFM_Config_I.txt");
	
	double *Config_I_Min = Input_Config_IO_MaxMin(FILE_Config_I,Config_S->Input_Layer_Count);
	double *Config_I_Max = Input_Config_IO_MaxMin(FILE_Config_I,Config_S->Input_Layer_Count);
		#ifdef debug
			Debug_debug_Config_IO_MinMax(F,"debug_Config_I.txt",Config_S->Input_Layer_Count,Config_I_Min,Config_I_Max);
		#endif
		
	File_Close(FILE_Config_I,"ANNSFM_Config_I.txt");
	
		//Input ANNSFM_CS_HB
	fstream FILE_CS_HB;
	File_OpenforRead(FILE_CS_HB,"ANNSFM_CS_HB.txt");
	
	double *Config_HB = Input_CS_HB_and_OB(FILE_CS_HB,Config_S->Hidden_Layer_Count);
		#ifdef debug
			Debug_debug_Config_HB_and_OB(F,"debug_Config_HB.txt",Config_S->Hidden_Layer_Count,Config_HB);
		#endif
		
	File_Close(FILE_CS_HB,"ANNSFM_CS_HB.txt");
	
		//Input ANNSFM_CS_HW
	fstream FILE_CS_HW;
	File_OpenforRead(FILE_CS_HW,"ANNSFM_CS_HW.txt");
	
	Matrix *CS_HW_head = Input_CS_HW_and_OW(FILE_CS_HW,Config_S->Hidden_Layer_Count,Config_S->Input_Layer_Count);
		#ifdef debug
			Debug_debug_Config_HW_and_OW(F,"debug_Config_HW.txt",Config_S->Hidden_Layer_Count,Config_S->Input_Layer_Count,CS_HW_head);
		#endif
		
	File_Close(FILE_CS_HW,"ANNSFM_CS_HW.txt");
	
		//Input ANNSFM_Config_O
	fstream FILE_Config_O;
	File_OpenforRead(FILE_Config_O,"ANNSFM_Config_O.txt");
	
	double *Config_O_Min = Input_Config_IO_MaxMin(FILE_Config_O,Config_S->Output_Layer_Count);
	double *Config_O_Max = Input_Config_IO_MaxMin(FILE_Config_O,Config_S->Output_Layer_Count);
		#ifdef debug
			Debug_debug_Config_IO_MinMax(F,"debug_Config_O.txt",Config_S->Output_Layer_Count,Config_O_Min,Config_O_Max);
		#endif
		
	File_Close(FILE_Config_O,"ANNSFM_Config_O.txt");
	
		//Input ANNSFM_CS_OB
	fstream FILE_CS_OB;
	File_OpenforRead(FILE_CS_OB,"ANNSFM_CS_OB.txt");
	
	double *Config_OB = Input_CS_HB_and_OB(FILE_CS_OB,Config_S->Output_Layer_Count);
		#ifdef debug
			Debug_debug_Config_HB_and_OB(F,"debug_Config_OB.txt",Config_S->Output_Layer_Count,Config_OB);
		#endif
	
	File_Close(FILE_CS_OB,"ANNSFM_CS_OB.txt");
	//Input ANNSFM_CS_OW
	fstream FILE_CS_OW;
	File_OpenforRead(FILE_CS_OW,"ANNSFM_CS_OW.txt");
	
	Matrix *CS_OW_head = Input_CS_HW_and_OW(FILE_CS_OW,Config_S->Output_Layer_Count,Config_S->Hidden_Layer_Count);
		#ifdef debug
			Debug_debug_Config_HW_and_OW(F,"debug_Config_OW.txt",Config_S->Output_Layer_Count,Config_S->Hidden_Layer_Count,CS_OW_head);
		#endif
	
	File_Close(FILE_CS_OW,"ANNSFM_CS_OW.txt");
	
	
		//Input ANNSFM_data_size
	fstream FILE_data_size;
	int *Data_Size = new int;
	
	File_OpenforRead(FILE_data_size,"ANNSFM_data_size.txt");
	
	FILE_data_size >> buffer;
	*Data_Size = stoi(buffer);

	File_Close(FILE_data_size,"ANNSFM_data_size.txt");

		//Input ANNSFM_inputs
	fstream FILE_inputs;
	File_OpenforRead(FILE_inputs,"ANNSFM_inputs.txt");
	
	Matrix *inputs_head = Input_inputs(FILE_inputs,Data_Size,Config_S->Input_Layer_Count);
		#ifdef debug
			Debug_debug_inputs(F,"debug_inputs.txt",inputs_head,Config_S);
		#endif
	
	File_Close(FILE_inputs,"ANNSFM_inputs.txt");
	
	fstream FILE_outputs;
	File_OpenforWrite(FILE_outputs,"ANNSFM_outputs.txt");
	
	Matrix *CurrentData = inputs_head;
	for(int i = 0 ; i < *Data_Size; i++){
			//Input Layer Normalization -> Into Hidden layer
		Input_Layer_Normalization(CurrentData->data,Config_I_Min,Config_I_Max,Config_S);
			//Hidden Layer Normalization WH(n,m)*I(m,l) + BH(n,1)
			//Hidden Layer Summation WH(n,m)*I(m,l)
			//Hidden Layer Transfer Function -> Into Output layer
		double *Hn = Hidden_Layer_Normalization(CurrentData->data,CS_HW_head,Config_HB,Config_S);
		Hidden_Layer_Summation(Hn,CS_HW_head,Config_S);
		Hidden_Layer_Transfer(Hn,Config_S);
			//Output Layer Normalization WO(l,n)*H(n,l) + BO(l,1)
			//Output Layer Summation WO(1,n)*I(m,1)
			//Output Layer Inverse Normalization
		double *Ol = Output_Layer_Normalization(CurrentData->data,CS_OW_head,Config_OB,Config_S);
		Output_Layer_Summation(Ol,CS_OW_head,Config_S);
		Output_Layer_Inverse_Normalization(Ol,Config_O_Min,Config_O_Max,Config_S);
			//Output y into ANNSFM_outputs
		Output_ANNSFM_outputs(FILE_outputs,Ol,Config_S);
		
		delete Hn;
		delete Ol;
		CurrentData = CurrentData->Next;
	}
	
	File_Close(FILE_outputs,"ANNSFM_outputs.txt");
	
    return 0;
}
