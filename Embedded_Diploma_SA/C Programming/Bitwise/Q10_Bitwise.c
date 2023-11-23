#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*10. Write a program that reads a positive integer and 
calculate the number of consecutive zeros between two ones 
   e.g: 0b11000110100111000001 the result will be */

int main(){
	
	uint16 user_number,y=0;
	uint8 max=0,zeros=0,i;

	scanf("%hi",&user_number); 			//User enters a decimal number EX. 6666 -> (0001 1010 0000 1010)//

	for(i = 0; i < 16; i++){				//Right Shift the bit to the first significant bit//

		y = ((user_number >> i) & 1);		//Right shifting the current bit (i) // //Masking the first significant bit// 
		if(y == 1){								//Reseting the zeros if the bit is = 1//
			zeros = 0;
		}
		else{										//Incrementing the zeros if the bit = 0//
			zeros++;
		}
		if(zeros > max){						//Saving the value of zero because the variable zeros could be reseted to 0//
			max = zeros;
		}
	}

	printf("%d Zeros",max); 				//Print the consecutive zeros between two ones EX.6666 --> 5//
}
