#include <stdio.h>

/*Ex.7 Find factorial of a number*/

int main (){
	int number,factorial;

	printf("Enter a number: ");
	scanf("%d",&number);
	
	if(number > 0){

		for(factorial = 1; number > 0; number--){
			factorial *= number;
		}

		printf("Factorial = %d",factorial);

	}
	else{
		printf("Error!!! Factorial of  negative number doesnt exist.");
	}

	return 0;
}