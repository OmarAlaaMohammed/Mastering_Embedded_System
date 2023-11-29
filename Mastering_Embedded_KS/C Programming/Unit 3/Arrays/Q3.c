#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex3 Find transpose of a matrix//

int main(){

	int rows,columns;
	uint8 i=0,j=0;
	float matrix[10][10];
	float transpose[10][10];

	printf("Enter rows and columns of matrix: ");
	scanf("%d\n%d",&rows,&columns);

	printf("Enter elements of matrix:\n");

	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin),fflush(stdout);
			scanf("%f",&matrix[i][j]);			
		}
	}

	// Printing the matrix
	
	printf("Enter Matrix: \n");
	fflush(stdin),fflush(stdout);
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("%.1f\t",matrix[i][j]);
			transpose[j][i] = matrix[i][j];
		}
		printf("\n");
	}

	// Printing the transposed matrix

	printf("Transpose of Matrix: \n");
	fflush(stdin),fflush(stdout);

	for(i = 0; i < columns; i++){
		for(j = 0; j < rows; j++){
			printf("%.1f\t",transpose[i][j]);
		}
		printf("\n");
	}

	return 0;

}