#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 3. Write a C Function that checks 
	if an integer is even or odd*/

void check(uint16);

int main(){

	uint16 num;	
	printf("Enter a number:\n");	//User Enters a Num//
	scanf("%hi",&num);
	check(num);						//Call the function 'check'//
}


void check(uint16 x){

	if(x % 2){
		printf("%d is odd number\n",x);	
	}
	else{
		printf("%d is even number\n",x);
	}

}