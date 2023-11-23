#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 5. Set last 2 bits of an 8 bit number given by user. //

int main(){
	uint8 User_Number;
	scanf("%d",&User_Number);  					 //User Enters a Decimal Number EX 15 = (0000 1111)//

	User_Number = ((User_Number) | (0b11 << 6)); /* = (0000 1111) | ((0000 0011) << 6)
													= (0000 1111) | (1100 0000)
													= (1100 1111) --> 207 */
	printf("%d",User_Number);

}
