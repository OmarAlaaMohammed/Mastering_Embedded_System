#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 1. Read value of the 4th bit in 8 bit binary number given by user. //

int main(){
	uint8 User_Number,Mask;
	scanf("%d",&User_Number); 		 //User Enters a decimal number//

	Mask = ((User_Number >> 4) & 1); //Left shifting and masking the 4th bit//

	if(Mask == 1){ 					 //Reading the 4th bit, wether its set or not//
		printf("The 4th bit is 1");	 
	}
	else{
		printf("The 4th bit is 0");
	}
}
