#include <stdio.h>

char PowerUsingRecursion(int, int);						

int main(){
	int num,result,power;
	printf("Enter base number: ");							
	scanf("%d",&num);

	printf("Enter power number(positive integer): ");
	scanf("%d",&power);

	result = PowerUsingRecursion(num,power);			
	printf("%d^%d = %d",num,power,result);

}


char PowerUsingRecursion(int num, int power){				
	if(power == 0){
		return 1;
	}
	else{
		return num*PowerUsingRecursion(num,power-1);
	}
}