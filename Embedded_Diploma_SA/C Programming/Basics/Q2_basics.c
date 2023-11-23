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
	scanf("%hi\n%hi",&num1,&num2); //User input//

	if(num1 == num2){
		printf("The two numbers are equal = %d\n",num1);
	}
	else if(num1 > num2){
		printf("The two numbers are not equal\nand the bigger number is %d\n",num1);
	}
	else{
		printf("The two numbers are not equal\nand the bigger number is %d\n",num2);
	}
}
