#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex4 Insert an element in array//

int main(){

	float numbers[100],inserted_number;
	uint8 N,i,index;

	printf("Enter no of elements: ");
	scanf("%d",&N);

	for(i = 0; i < N; i++){
		scanf("%f",&numbers[i]);
	}

	printf("Enter the element to be inserted: ");
	scanf("%f",&inserted_number);

	printf("Enter the location: ");
	scanf("%d",&index);

		for(i = N-1; i > index-2; i--)
		{
			numbers[i+1] = numbers[i];
		}

	numbers[index-1] = inserted_number;

	for(i = 0; i < N+1; i++){
		printf("%.1f ",numbers[i]);
	}

	return 0;
}