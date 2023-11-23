#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

//8.Reverse all bit in an 8 bit binary number given by user//

int main(){
	
	uint8 User_Number,y=0;
	scanf("%d",&User_Number);							//User enters a decimal number EX. 26 --> (0001 1010)//
	for(uint8 i = 0 ;i < 8 ; i++){						//Right shifting the current bit to the first significant bit//
		y = y | (((User_Number >> i) & 1) << (7-i));	//Masking it then Right shifting to the desired position//
	}
	printf("%d",y);										// Before (0001 1010) ----> After (0101 1000)//
}
