#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

//7.Write a program that reads a positive integer and reverse all bits//

int main(){
	
	uint32 User_Number,y=0; 
	uint8 i;
	scanf("%x",&User_Number); 							// User Enters a Hexdecimal EX.12345678// 

	for(i = 0; i<29; i = i + 4){						
														// Every nibble starts with 0+i where i increments each time by 4 //
														// 1-Right Shifting the nibble to the least significant bit//
		y = y | (((User_Number >> i) & 0xf) << (28-i));	// 2-Masking the nibble //
														// 3-Shifting to the left to the desired position //
	}
	printf("0x%x",y);										//Expected output should be 0x87654321//
}
