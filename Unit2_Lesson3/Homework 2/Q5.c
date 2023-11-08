#include <stdio.h>

/*Ex.5 C Program to Check Whether a Character is an Alphabet or not */

int main(){
	char x;
	printf("Enter a character: ");
	scanf("%c",&x);

	if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
		printf("%c is an alphabet",x);
	}

	else{
		printf("%c is not an alphabet",x);
	}
	return 0;
}
