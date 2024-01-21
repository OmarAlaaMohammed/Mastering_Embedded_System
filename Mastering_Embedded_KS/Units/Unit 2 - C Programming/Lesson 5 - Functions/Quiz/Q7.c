#include <stdio.h>

char checkPowerOfThree(int);


int main(){


	int x = 9;
	printf("Enter a number: ");
	scanf("%d",&x);

	if(checkPowerOfThree(x)){
		printf("%d ==> 0 (Power of three)\n", x);
	}
	else{
		printf("%d ==> 1 (Not Power of three)\n", x);
	}

}


char checkPowerOfThree(int num){
	if(num <= 0){

		return 0;
	}

	while(num % 3 == 0){
		num /= 3;
	}

	return(num == 1);
}