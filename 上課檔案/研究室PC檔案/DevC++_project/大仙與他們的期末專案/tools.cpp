#include"tools.h"



void File_OpenforRead(fstream& F,string S){
	F.open(S.c_str(),ios_base::in);
	if(F.fail()){
	    cout << "Open Error: " << S << endl;
	    system("pause");
	}
}

void File_OpenforWrite(fstream& F,string S){
	F.open(S.c_str(),ios_base::out);
	if(F.fail()){
	    cout << "Open Error: " << S << endl;
	    system("pause");
	}
}

void File_OpenforAppend(fstream& F,string S){
	F.open(S.c_str(),ios_base::app);
	if(F.fail()){
	    cout << "Open Error: " << S << endl;
	    system("pause");
	}
}

void File_Close(fstream& F,string S){
	F.clear();
	F.close();
	if(F.fail()){
	    cout << "Close Error: " << S << endl;
	    system("pause");
	}
	
}

matrix *Create_Matrix(fstream& F,int I,int J){
	Matrix *inputs_head = new Matrix;
	Matrix *inputs_current = inputs_head;
	for(int a = 0; a < I; a++){
			double *array_buffer = new double[J] ;
			inputs_current->data = array_buffer;
			Input_nData_Into_Array(F,J,array_buffer);
		if(!(a == I - 1)){
			//new node
			inputs_current->Next = new Matrix;
			inputs_current = inputs_current->Next;
		}
	}
	return inputs_head;
}

void Input_nData_Into_Array(fstream& F,int Layer_Count,double *array_buffer){
	string buffer;
	for(int i = 0; i < Layer_Count; i++){
		F >> buffer;
		*(array_buffer+i) = stod(buffer);
	}
}