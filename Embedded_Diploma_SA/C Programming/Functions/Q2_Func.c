#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 2.Write a C Function that reads two integers
 and checks if the first is multiple of the second*/

void func(uint16, uint16);

int main(){

	uint16 x,y;
	func(10,6);
	func(16,4);
}


void func(uint16 x,uint16 y){
	if(x % y){
		printf("\nThe first %d is not multiple of the second %d\n\n",x,y);
	}
	else{
		printf("\nThe first %d is multiple of the second %d\n",x,y);
	}
}