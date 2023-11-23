#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 6. If you have 1 byte variable, write a code to swap bits #2 with #6 
(swap mean put bit #2 in the location of bit #6 and bit #6 in location of bit #2)*/

int main(){
	
	uint8 User_Number;
	scanf("%d",&User_Number); 				//User Enters a Decimal Number EX. 15 -> (0000 1111) //
	
	User_Number = (User_Number ^ ((1 << 2) | (1 << 6))); 	/* = (0000 1111) ^ ((0100 0000) | (0000 0100)) 
															   = (0000 1111) ^ (0100 0100)
															   = (0100 1011) -->  75 */
	printf("%d",User_Number);
}
