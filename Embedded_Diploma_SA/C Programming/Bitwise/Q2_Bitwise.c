#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

	//2.Set value of the 5th bit (make it one) in 8 bit binary number given by user//


int main(){

	uint8 User_Number;
	scanf("%d",&User_Number); 				//User Enters a decimal number EX. 15 = (0000 1111)//		
		
	User_Number = (User_Number | (1 << 5));	/* = (0000 1111) | (0010 0000) 
											   = (0010 1111) -----> 47 */
	printf("%d\n",User_Number);
}
