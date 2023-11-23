#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

int main(){
	uint16 score;

	printf("Enter a number:\n");
	scanf("%hi",&score);

	if(score >=85){
		printf("Excellent");
	}
	else if(score >= 75){
		printf("Very Good");
	}
	else if(score >= 65){
		printf("Good");
	}
	else if(score >= 50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}
