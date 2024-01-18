#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex1 Find sum of two matrix of order 2*2 using multidimensional arrays//

int main(){

	float matrix_1[2][2],Matrix_2[2][2];
	float sum[2][2] = {0,0,0,0};

	uint8 i,j;

	printf("Enter the elements of 1st matrix\n");

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&matrix_1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			scanf("%f",&matrix_2[i][j]);
		}
	}

	printf("Sum of Matrix:\n");

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			sum[i][j] = matrix_1[i][j] + matrix_2[i][j];	
			printf("%.1f\t",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}