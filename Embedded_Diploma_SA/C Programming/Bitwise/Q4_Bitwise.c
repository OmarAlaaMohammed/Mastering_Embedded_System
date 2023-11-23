#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 4. Toggle value of the 6th bit (make it 0 if it is 1 and 1 if it is 0)
			 in 8 bit binary number given by user */

int main(){
	uint8 User_Number;
	scanf("%d",&User_Number); 				//User Enter a Decimal Number EX. 111 (0110 1111) //

	User_Number = (User_Number ^ (1 << 6)); /* = (0110 1111) ^ (0100 0000)
											   = (0010 1111) --> 47 */
	printf("%d",User_Number);
}
