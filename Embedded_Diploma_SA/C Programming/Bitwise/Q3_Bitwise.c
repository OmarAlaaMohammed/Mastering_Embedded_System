#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

 // 3. Clear value of the 2nd bit (make it Zero) in 8 bit binary number given by user //

int main(){
	uint8 User_Number;          				
	scanf("%d",&User_Number); 					//User Enters Num EX. 15 = (0000 1111) //

	User_Number = (User_Number & ~(1 << 2));	/* = (0000 1111) & ~(0000 0100) =
												   = (0000 1111) &  (1111 1011) = (0000 1011) -> 11 */
	printf("%d",User_Number);
}
