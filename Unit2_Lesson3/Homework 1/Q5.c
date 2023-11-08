#include <stdio.h>

/* Ex.5 Write C Program to Find ASCII Value of a Character*/

int main(){

	char letter;
	printf("Enter a character: ");
	scanf("%c",&letter);
	printf("ASCII value of %c = %d",letter,letter);

	return 0;
	
}