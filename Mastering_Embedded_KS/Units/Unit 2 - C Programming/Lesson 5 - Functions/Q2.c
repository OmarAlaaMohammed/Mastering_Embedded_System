
#include <stdio.h>

int FactorialUsingRecursion(int);

int main(){

	int num,result;
	printf("Enter a positive number: ");
	scanf("%d",&num);

	result = FactorialUsingRecursion(num);
	printf("Factorial of %d = %d",num,result);

	return 0;
}


int FactorialUsingRecursion(int num){
	if(num == 1 || num == 0){
		return 1;
	}else{
		return num*FactorialUsingRecursion(num-1);
	}
}

