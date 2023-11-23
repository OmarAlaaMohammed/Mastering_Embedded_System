#include <stdio.h>

/*Ex.8 Write a C Function that return the addition or subtraction 
	   or multiplication or division of two numbers.
       The function should be implemented using switch case */

int main(){
	char operator;
	float x,y;

	printf("Enter operator either + or - or * or divide: ");
	scanf("%c",&operator);
	printf("Enter two operands:");
	scanf("%f %f",&x,&y);

	switch(operator){
	case '+': 
		printf("%.2f + %.2f = %.2f",x,y,(x+y));
		break;
	case '-': 
		printf("%.2f - %.2f = %.2f",x,y,(x-y));
		break;
	case '*': 
		printf("%.2f * %.2f = %.2f",x,y,(x*y));
		break;
	case '/': 
		if(y == 0){
			printf("ERROR! Number can't be divided by zero.");
		}
		else{
			printf("%.2f / %.2f = %.2f",x,y,(x/y));			
		}

		break;

	default:
		printf("Error in the entry of the operator");
		break;
	}
	return 0;

}