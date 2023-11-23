#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 9. Write a program that reads a positive integer and 
calculate the number of ones & zeros in the number */

int main(){
	
	uint8 user_number,ones,zeros;
	uint8 i;
	scanf("%d",&user_number); 				//User enters a decimal number EX. 15 -> (0000 1111)//
	for(i = 0; i < 8; i++){					//Right Shift the bit to the first significant bit//
		if(user_number & 1 == 1){			//Mask the first significant bit and check if its 1 or 0//
			ones++;
		}
		else{
			zeros++;
		}
		user_number = (user_number >> 1);
	}
	printf("the number of zeros = %d , the number of ones = %d",zeros,ones); 

}
