#include <stdio.h>

/*Ex.7 Write Source Code to Swap Two Numbers without temp variable*/

int main(){

	int x,y;

	printf("Enter value of a: ");
	scanf("%d",&x);
	printf("Enter value of b: ");
	scanf("%d",&y);

	/*swapping using XOR operator*/

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("After swapping, value of a = %d\n",x);
	printf("After swapping, value of b = %d",y);

	return 0;
}