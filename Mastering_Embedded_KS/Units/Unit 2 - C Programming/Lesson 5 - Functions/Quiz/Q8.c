#include <stdio.h>

void lastOccurance(int*, int);

int main(){

	int arrayOfNumbers[10] = {1,2,3,4,5,6,4};
	int desiredNumber;

	printf("Enter the number to check last occurance: ");
	scanf("%d",&desiredNumber);
	
	lastOccurance(arrayOfNumbers, desiredNumber);

}


void lastOccurance(int* arrayOfNumbers, int desiredNumber){
	char position = -1;
	for(int i = 0; i < 10; i++){
		if(arrayOfNumbers[i] == desiredNumber)	position = i;
	}

	if(position == -1){
		printf("It didn't occur");
	}
	else{
		printf("The number %d ==> the result %d", desiredNumber, position);
	}
}