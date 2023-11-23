#include <stdio.h>

typedef unsigned char 		 uint8;
typedef unsigned short 		 uint16;
typedef unsigned long 		 uint32;
typedef unsigned long long  uint64;

typedef signed char 		    int8;
typedef signed short 		 int16;
typedef signed long 		    int32;
typedef signed long long    int64;

/*11. Write a code to multiply an input 1byte from user 
	  by 14 without using multiplication operator: 
		e.g: user input is 2, output will be 28*/

int main(){
	uint16 result;
	uint8 user_number; 													
	scanf("%d",&user_number);		//User input EX.2 --> (0011)//							

	multi = (user_number<<3) + 	//since 14 -> (1110)
			  (user_number<<2) + 
			  (user_number<<1);

	printf("%hi",multi);
}
