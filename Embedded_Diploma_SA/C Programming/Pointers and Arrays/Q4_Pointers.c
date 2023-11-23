#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*4.Write a C Function that take an array and 
	its size, return the max number*/


	//Functions Prototype//

uint8 Maximum(uint8*, uint8);

	//-------------------//

int main(){
	uint8 Numbers[] = {12,10,8,6,1,4,17};							//Random Numbers in Array//
	uint8 Number_of_Elements = sizeof(Numbers)/sizeof(Numbers[0]);	//To Get the number of elements in Array//
	uint8 i,Max_Number;


	for(i = 0; i < Number_of_Elements; i++){						//Print the Array//
		printf("%d ",Numbers[i]);
	}

	Max_Number = Maximum(Numbers,Number_of_Elements);				//Calling the function 'Max' and passing the array and the size of it//
	printf("\n%d",Max_Number);										//Printing the returned number (Maximum)//
}

uint8 Maximum(uint8* PNum,uint8 Len){
	uint8 i,Max=0;													//Compare the current Max with the current array number//
	for(i = 0; i < Len; i++){										//Keep incrementing until the condition is true//
		if(Max < PNum[i]){
			Max = PNum[i];
		}
	}
	return Max;														//Return the maximum number//
}