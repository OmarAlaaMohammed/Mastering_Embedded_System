#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long  		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long  		int32;
typedef signed long long    int64;

//Ex2 Calculate average using arrays//

int main(){

	uint8 numberOfElements;
	uint8 i;
	float nums[100]; 	//Assuming that number of elements won't exceed a 100 elements
	float sum = 0;

	printf("Enter the numbers of data: ");
	scanf("%d",&numberOfElements);
	while(numberOfElements > 100)
	{
		printf("Enter a number less than a 100 in order to proceed the program\n");
		printf("Enter the numbers of data: ");
		scanf("%d",&numberOfElements);
	}

	for(i = 0; i < numberOfElements; i++){
		printf("Enter a number: ");
		scanf("%f",&nums[i]);
		sum += nums[i];
	}

	printf("Average  = %.2f", sum/numberOfElements);
	
	return 0;
}
