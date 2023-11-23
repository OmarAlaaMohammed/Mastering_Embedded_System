#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long      uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long        int64;

/* 5. Write a C Function that return the addition or subtraction 
	or multiplication or division of two numbers.
    The function should be implemented using switch case */

void calculator(float, float);

	float num1,num2;
	uint16 choice;

void main(){

	printf("Enter two number:\n");
	scanf("%f\n%f",&num1,&num2);

	printf("Enter the mathematic operation of your choice:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Divison\n");
	scanf("%hi",&choice);

	if(choice > 4){
		printf("Please enter a number from 1-4");
	}

	else{
		calculator(num1,num2);
	}	
}


void calculator(float num1, float num2){
	switch(choice){
		case 1: printf("%f + %f = %f", num1,num2,(num1+num2));
			break;

		case 2: printf("%f - %f = %f",	num1,num2,(num1-num2));
			break;

		case 3: printf("%f * %f = %f",	num1,num2,(num1*num2));
			break;

		case 4: if(num2 == 0){
				printf("Number can't be divided by zero");
			}
			else{
				printf("%f / %f = %f",	num1,num2,(num1/num2));
			}
			break;

        	default: printf("You entered wrong choice\n");
                	break;
	}

}