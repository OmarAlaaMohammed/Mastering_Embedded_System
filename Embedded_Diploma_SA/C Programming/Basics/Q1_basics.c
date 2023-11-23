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

	int16 num1,num2;
	printf("Enter two numbers:\n");
	scanf("%hi\n%hi",&num1,&num2); 				//User input//

	float result = ((num1+num2)*3)/2-10; 		//Without Explicit type casting//
												//float result =(float) ((num1+num2)*3)/2-10;// //With Explicit type casting//
	printf("The result = %f",result);
}
