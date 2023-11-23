#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*5.Write a C Function that take an array and 
	its size, return the min number*/

	//Functions Prototype//

uint8 Minimum(uint8*, uint8);

	//-------------------//

int main(){
	uint8 Numbers[] = {12,10,8,6,1,4,17};								//Random Numbers in Array//
	uint8 Number_of_Elements = sizeof(Numbers)/sizeof(Numbers[0]);		
	uint8 i,Min_Number;


	for(i = 0; i < Number_of_Elements; i++){							//Print the Array//
		printf("%d ",Numbers[i]);
	}

	Min_Number = Minimum(Numbers,Number_of_Elements);					//Calling the function 'Minimum' and passing the array and the size of it//
	printf("\n%d",Min_Number);											//Printing the returned number (Minimum)//
}

uint8 Minimum(uint8* PNum,uint8 Len){
	uint8 i, Min=PNum[0];												//Compare the current Min with the current array number//
	for(i = 0; i < Len; i++){											//Keep incrementing until the condition is true//
		if(Min > PNum[i]){	
			Min = PNum[i];
		}
	}
	return Min;															//Return the minimum number//
}