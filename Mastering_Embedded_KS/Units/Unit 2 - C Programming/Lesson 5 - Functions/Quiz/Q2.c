
#include <stdio.h>

void swapStrings(char*, char*);

int main()
{
	char x[50];
	char y[50];
	
	printf("Enter the first string:");
	scanf("%s", x);
	printf("Enter the second string:");
	scanf("%s", y);


	swapStrings(x,y);

	printf("string x = %s\n",x);
	printf("string y = %s",y);
	
}



void swapStrings(char* x, char* y){

	for(int i = 0;(y[i] != '\0') || (x[i] != '\0'); i++){
		int temp;
		temp = x[i];
		x[i] = y[i];
		y[i] = temp;

	}

}