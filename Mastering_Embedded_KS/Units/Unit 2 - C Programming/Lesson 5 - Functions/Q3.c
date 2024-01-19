
#include <stdio.h>

void reverseUsingRecusrion();

int main(){

	printf("Enter a sentence: ");
	reverseUsingRecusrion();

	return 0;
}
void reverseUsingRecusrion(){
	char c;
	scanf("%c",&c);
	if(c != '\n'){
		reverseUsingRecusrion();
		printf("%c",c);
	}
}