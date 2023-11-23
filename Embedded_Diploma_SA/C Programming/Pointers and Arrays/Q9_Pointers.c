#include <stdio.h>

typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned long 		uint32;
typedef unsigned long long  uint64;

typedef signed char 		int8;
typedef signed short 		int16;
typedef signed long 		int32;
typedef signed long long    int64;

/*9. Write a C Function that take an array and its size,
     then reverse all the element of the array 
   	  • void reverse(char* array, char size); 
  	e.g: Input 1 5 6 3 4 5  output 5 4 3 6 5 1*/


void Reverse(uint8*, uint8);

	//-------------------//

int main(){

	uint8 Numbers[] = {15,19,2,8,10,7,9,3};					//Group of numbers//	
	uint8 Length = (sizeof(Numbers)/sizeof(Numbers[0]));		//The total number of elements in the array//
	uint8 i;
	Reverse(Numbers, Length);							//Call the function 'Reverse' and passing the array and it's size//
	for(i = 0; i < Length; i++){
		printf("%d ",Numbers[i]);
	}	
}


void Reverse(uint8* p, uint8 Len){								
	uint8 i,temp;	

	for(i = 0; i < Len/2; i++){				//For loop to swap the elements//
		temp = p[i];
		p[i] = p[Len-i-1];
		p[Len-i-1] = temp;
	}
	
}

