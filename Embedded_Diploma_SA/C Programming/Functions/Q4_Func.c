#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/* 4. Write a C Function that checks if 
	an integer is prime or not*/


void prime(uint16);

int main(){

	uint16 num;	
	printf("Enter a number:\n");	//User Enters a number//
	scanf("%hi",&num);
	prime(num);						//Call the function 'prime'//
}


void prime(uint16 x){

	uint16 count = 0;
	for(uint16 i = 1; i < x; i++){

		if(x % i == 0){
			count++;
		}
		
		if(count == 3){
			printf("%d is not a prime number",x);
			break;
		}
	}

	if(count < 3){
		printf("%d is a prime number",x);
	}

}