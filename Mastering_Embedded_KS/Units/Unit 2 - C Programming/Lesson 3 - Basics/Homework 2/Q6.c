#include <stdio.h>

/*Ex.6 Program to calculate the sum of natural numbers*/

int main(){
	int number,sum = 0;

	printf("Enter an integer: ");
	scanf("%d",&number);

	for(sum = 0;number > 0; number--){
		number += number;
	}

	printf("Sum = %d", sum);

	return 0;
}