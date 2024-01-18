#include <stdio.h>

/*Ex.6 Write Source Code to Swap Two Numbers*/

int main(){

	int num1,num2,temp;
	printf("Enter value of a: ");
	scanf("%d",&num1);
	printf("Enter value of b: ");
	scanf("%d",&num2);

	temp = num2;
	num2 = num1;
	num1 = temp;

	printf("After swapping, value of a = %d\n",num1);
	printf("After swapping, value of b = %d",num2);

	return 0;
}