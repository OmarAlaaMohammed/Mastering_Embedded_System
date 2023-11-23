#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

// 1. Write four ways to swap the value of two integer numbers //

int main(){

	uint16 x=6,y=10;

	//----------First Solution----------//
	//----------Third Variable----------//

	
	uint16 temp;
	temp = x;
	x = y;
	y = temp;
	

	//---------Second Solution---------//
	//------------Addition-------------//

	/*
	x = x + y;
	y = x - y;
	x = x - y;
	*/

	//---------Third Solution---------//
	//---------Multiplication---------//

	/*
	x = x * y;
	y = x / y;
	x = x / y;
	*/

	//---------Fourth Solution--------//
	//----------XOR Operator----------//	

	/* 
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	*/

	printf("x = %d\ny = %d",x,y);
}
