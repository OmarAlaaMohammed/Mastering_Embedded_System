#include <stdio.h>

int fourthSignificantBit(int);

int main(){
	int userInput;
	printf("Enter a number: ");
	scanf("%d",&userInput);
	printf("The 4th least significant bit for number %d is %d", userInput, fourthSignificantBit(userInput));

}

int fourthSignificantBit(int number){
	return ((number >> 3) & 1);	
}
