#include <stdio.h>

typedef unsigned char 		 uint8;
typedef unsigned short 		 uint16;
typedef unsigned long 		 uint32;
typedef unsigned long long   uint64;

typedef signed char 		 int8;
typedef signed short 		 int16;
typedef signed long 		 int32;
typedef signed long long     int64;

/*12. Write a code to check if number is 
odd or even using bitwise operators only.*/

int main(){
	uint8 user_number; 													
	scanf("%d",&user_number);		//User input EX.2 --> (0011)//							

	if((user_number & 1) == 1){		//Odd numbers always start with 1 and even numbers start with 0//
		printf("The number is odd");
	}
	else{
		printf("The number is even");
	}

}
