#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*8.Write a C program to find second largest element in an array*/

	//Functions Prototype//

void swap(uint8 *, uint8 *);
void Arrange(uint8*, uint8);

	//-------------------//

int main(){

	uint8 Numbers[] = {12,19,2,8,10,7,9,3};					//Random Numbers in Array//
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));	//To Get the number of elements in Array//

	Arrange(Numbers, Length);								//Calling the function 'Arrange' and passing the array and the size of it//
	printf("The second largest element is %d",Numbers[1]);	/*After arranging the array from the largest to the smallest
																the second largest element is in Numbers[1]*/
}


void Arrange(uint8* PNum, uint8 Len){							
	uint8 i,j;

	for(i = 0; i < Len; i++){								
		for(j = i + 1; j < Len; j++){
			if(PNum[j] > PNum[i]){

				swap(&PNum[i],&PNum[j]);
			}
		}
	}
}

void swap(uint8 *a, uint8 *b){
	uint8 temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
