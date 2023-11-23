#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*6.Write a C Function that take an array and its size,
	 return the average of its elements.*/

	//Functions Prototype//

uint8 Average_Of_Numbers(uint8*, uint8);

	//-------------------//

int main(){

	uint8 Average;
	uint8 Numbers[] = {15,10,2,8,10,7,9,3};					//Random Numbers in Array//
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));	//To Get the number of elements in Array//
	Average = Average_Of_Numbers(Numbers,Length);			//Calling the function 'Average_Of_Numbers' and passing the array and the size of it//
	printf("%d",Average);									//Print the average number//
}

uint8 Average_Of_Numbers(uint8* p,uint8 Len){

	uint8 i,Avg = 0;										
	
	for(i = 0; i < Len; i++){								//Sum up all numbers in the array by incrementing and adding through the array//
		Avg += p[i];
	}

	Avg = Avg/Len;											//Divide the sum by the size of the array to get the average//
	return Avg;												//Return the average//
}