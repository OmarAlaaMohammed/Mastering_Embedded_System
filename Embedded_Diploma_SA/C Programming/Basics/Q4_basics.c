#include "test.h"

int main(){

	uint16 num,i;
	while(1){

		printf("Please enter a positive number:\t\t");		
		scanf("%hi",&num);       //User enters a positive number//

		//-------------------------------------------------------//

		if(num <= 0){				 //If the number is negative -> "INVALID"//
			printf("Invalid (Negative Number)");
		}

		//-------------------------------------------------------//
		
		if(num > 0){
			for(i = 2 ;i < num/2 ;i++){   //increments from i=2 to the half of the entered number//
				if((num % i) == 0 ){  //Ex. 6/2 = 3 no remainders so its not a prime number//
					printf("Not Prime Number\n");		 // trigger flag which means it is not a prime number //
					break;
				}
			}
		}
		if(i == num/2 || num == 2 || num == 3){
			printf("Prime Number\n");
		}
		

	}
}