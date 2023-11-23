#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;


int main(){

	int16 num1;
	printf("Enter a number:\n");
	scanf("%hi",&num1); //User input//

	if(num1 % 2){ 		/*Calculates the remainder of the number divided by two
						  0 false, any other remainder true*/
		printf("This number is even");
	}
	else{
		printf("This number is odd");
	}
	
}
