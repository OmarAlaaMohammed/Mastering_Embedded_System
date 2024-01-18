#include <stdio.h>

/*Ex.4 C program to check whether a number is positive or negative*/

int main(){
	float num;

	printf("Enter a number: ");
	scanf("%f",&num);

	if(num > 0){
		printf("%.2f is positive.",num);
	}
	else if(num < 0){
		printf("%.2f is negative.",num);
	}
	else{
		printf("You entered zero.");
	}

	return 0;
}