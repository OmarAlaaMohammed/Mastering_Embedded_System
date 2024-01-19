#include <stdio.h>

/*Ex.2 C Program to Check Vowel or Consonant*/

int main(){

	char ch;

	printf("Enter an alphabet: ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'A' || ch == 'o' || ch == 'O' ||
	   ch == 'i' || ch == 'I' || ch == 'e' || ch == 'E' || 
	   ch == 'u' || ch == 'U')
	{
		printf("%c is a vowel.",ch);
	}

	else
	{
		printf("%c is consonant.",ch);
	}

	return 0;
}