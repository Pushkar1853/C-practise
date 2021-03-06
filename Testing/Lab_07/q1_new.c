#include<stdio.h>
#include<stdlib.h>

int arow,acol,brow,bcol;

void generateMatrix(){

	FILE *fptr;
	//Creating the Matrix A
	// printf("Enter the row size for martix A:");
	// printf("Enter the column size for martix A:");
	fptr = fopen("Ques1_Input1.txt", "a");
	fscanf(fptr,"%d", &arow);
	fscanf(fptr,"%d", &acol);
    fprintf(fptr,"\n");
	for(int i=0; i<arow; i++){
		for(int j=0; j<acol; j++){
			fprintf(fptr, "%d ", rand()%10);
		}
		fprintf(fptr, "\n");
	}
	fclose(fptr);

	//Creating the Matrix B
	// printf("Enter the row size for martix B:");
	// printf("Enter the column size for martix B:");
	fptr = fopen("Ques1_Input1.txt", "a");
	fscanf(fptr,"%d", &brow);
	fscanf(fptr,"%d", &bcol);
	for(int i=0; i<brow; i++){
		for(int j=0; j<bcol; j++){
			fprintf(fptr, "%d ", rand()%10);
		}
		fprintf(fptr, "\n");
	}
	fclose(fptr);	
}
void matrixMultiplication(){
	FILE *fptr;
	int matrixA[arow][acol], matrixB[brow][bcol], num;
	//Accessing file a.txt and storing value in matrixA
	fptr = fopen("Ques1_Input1.txt", "a");
    fprintf(fptr, "\n");
	for(int i=0; i<arow; i++){
		for(int j=0; j<acol; j++){
			fscanf(fptr, "%d", &num);
			matrixA[i][j] = num;
		}
	}
	fclose(fptr);

	//Accessing file b.txt and storing the value in matrixB
	fptr = fopen("Ques1_Input1.txt", "a");
    fprintf(fptr, "\n");
	for(int i=0 ; i<brow; i++){
		for(int j=0; j<bcol; j++){
			fscanf(fptr, "%d", &num);
			matrixB[i][j] = num;
		}
	}
	fclose(fptr);

	//Matrix Multiplication
	 if(acol != brow){
	 	printf("Matix Multiplication is not possible due to dimension conflicts\n");
	 }else{
	 	fptr = fopen("Ques1_Input1.txt", "a");
         fprintf(fptr, "\n");
	 	for(int i=0; i<arow; i++){
	 		for(int j=0; j<bcol; j++){
	 			long long int sum = 0;
	 			for(int k=0; k<acol; k++){
	 				sum = sum + matrixA[i][k] * matrixB[k][j];
	 			}
	 			fprintf(fptr, "%lld ", sum);
	 		}
	 		fprintf(fptr, "\n");
	 	}
	 	fclose(fptr);
	 	printf("Please check the file Ques1_Input1.txt for result\n");
	 }	
}

int main(){
	generateMatrix();
	matrixMultiplication();
	return 0;
}